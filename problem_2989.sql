-- PROBLEM 2989
-- link = https://www.beecrowd.com.br/judge/pt/problems/view/2989

SELECT
	departamento_divisao_empregado.departamento departamento,
    departamento_divisao_empregado.divisao divisao,
    ROUND(AVG(empregado_salario.salario - empregado_desconto.valor_desconto), 2) media,
    MAX(empregado_salario.salario - empregado_desconto.valor_desconto) maior
FROM
	(-- EMPREGADO DESCONTO
	SELECT
		empregado.matr matricula,
		SUM(COALESCE(desconto.valor, 0)) valor_desconto
	FROM
		empregado LEFT JOIN emp_desc
		ON empregado.matr = emp_desc.matr
		LEFT JOIN desconto
		ON emp_desc.cod_desc = desconto.cod_desc
	GROUP BY
		empregado.matr
	) empregado_desconto
	JOIN
	(
	-- EMPREGADO SALARIO
	SELECT
		empregado.matr matricula,
		SUM(COALESCE(vencimento.valor, 0)) salario
	FROM
		empregado LEFT JOIN emp_venc
		ON empregado.matr = emp_venc.matr
		LEFT JOIN vencimento
		ON vencimento.cod_venc = emp_venc.cod_venc
	GROUP BY
		empregado.matr
	) empregado_salario
	ON
	empregado_salario.matricula = empregado_desconto.matricula
	JOIN
	(
	-- DEPARTAMENTO DIVISAO EMPREGADO
	SELECT
		departamento.cod_dep codigo_departamento,
		departamento.nome departamento,
		divisao.cod_divisao codigo_divisao,
		divisao.nome divisao,
		empregado.matr matricula
	FROM
		empregado JOIN divisao
		ON empregado.lotacao_div = divisao.cod_divisao
		JOIN departamento
		ON departamento.cod_dep = divisao.cod_dep
	) departamento_divisao_empregado
	ON
	departamento_divisao_empregado.matricula = empregado_salario.matricula
GROUP BY
	departamento_divisao_empregado.codigo_divisao,
    departamento_divisao_empregado.departamento,
    departamento_divisao_empregado.divisao
ORDER BY 
	media DESC
;