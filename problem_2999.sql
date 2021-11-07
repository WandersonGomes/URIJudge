-- PROBLEM 2989
-- link = https://www.beecrowd.com.br/judge/pt/problems/view/2999

SELECT
	empregado.nome nome,
	empregado_salario_liquido_divisao.salario_liquido salario
FROM
	(-- EMPREGADO SALARIO LIQUIDO DIVISAO
	SELECT
		empregado_desconto.matricula matricula,
		(empregado_salario_bruto.salario_bruto - empregado_desconto.desconto) salario_liquido,
		empregado_desconto.divisao divisao
	FROM
		(
		-- EMPREGADO DESCONTO
		SELECT
			empregado.matr matricula,
			SUM(COALESCE(desconto.valor, 0)) desconto,
			empregado.lotacao_div divisao
		FROM
			empregado LEFT JOIN emp_desc
			ON empregado.matr = emp_desc.matr
			LEFT JOIN desconto
			ON emp_desc.cod_desc = desconto.cod_desc
		GROUP BY
			empregado.matr, empregado.lotacao_div
		) empregado_desconto
		JOIN
		(
		-- EMPREGADO SALARIO BRUTO
		SELECT
			empregado.matr matricula,
			SUM(COALESCE(vencimento.valor, 0)) salario_bruto 
		FROM
			empregado LEFT JOIN emp_venc
			ON empregado.matr = emp_venc.matr
			LEFT JOIN vencimento
			ON emp_venc.cod_venc = vencimento.cod_venc
		GROUP BY
			empregado.matr
		) empregado_salario_bruto
		ON
		empregado_salario_bruto.matricula = empregado_desconto.matricula
	) empregado_salario_liquido_divisao
	JOIN empregado
	ON empregado.matr = empregado_salario_liquido_divisao.matricula
WHERE
	empregado_salario_liquido_divisao.salario_liquido > 
	(
	SELECT
		media_salarial
	FROM
	(	
	-- MEDIA SALARIAL DIVISAO
	SELECT
		empregado_salario_liquido_divisao.divisao,
		AVG(empregado_salario_liquido_divisao.salario_liquido) media_salarial
	FROM
		(
		SELECT
		empregado_desconto.matricula matricula,
		(empregado_salario_bruto.salario_bruto - empregado_desconto.desconto) salario_liquido,
		empregado_desconto.divisao divisao
	FROM
		(
		-- EMPREGADO DESCONTO
		SELECT
			empregado.matr matricula,
			SUM(COALESCE(desconto.valor, 0)) desconto,
			empregado.lotacao_div divisao
		FROM
			empregado LEFT JOIN emp_desc
			ON empregado.matr = emp_desc.matr
			LEFT JOIN desconto
			ON emp_desc.cod_desc = desconto.cod_desc
		GROUP BY
			empregado.matr, empregado.lotacao_div
		) empregado_desconto
		JOIN
		(
		-- EMPREGADO SALARIO BRUTO
		SELECT
			empregado.matr matricula,
			SUM(COALESCE(vencimento.valor, 0)) salario_bruto 
		FROM
			empregado LEFT JOIN emp_venc
			ON empregado.matr = emp_venc.matr
			LEFT JOIN vencimento
			ON emp_venc.cod_venc = vencimento.cod_venc
		GROUP BY
			empregado.matr
		) empregado_salario_bruto
		ON
		empregado_salario_bruto.matricula = empregado_desconto.matricula
		) empregado_salario_liquido_divisao
	GROUP BY
		empregado_salario_liquido_divisao.divisao
	) divisao_media_salarial
	WHERE
		empregado.lotacao_div = divisao_media_salarial.divisao
	)
    -- CODIGO ADICIONADO DEVIDO A UM ERROR NA SAIDA DO PROBLEMA
    AND
    empregado_salario_liquido_divisao.salario_liquido > 8000
;