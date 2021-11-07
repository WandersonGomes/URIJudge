-- PROBLEM 2989
-- link = https://www.beecrowd.com.br/judge/pt/problems/view/2997

SELECT
	departamento.nome "Departamento",
    empregado.nome "Empregado",
    empregado_salario_bruto.salario_bruto "Salario Bruto",
    empregado_total_descontos.total_desconto "Total Desconto",
    (empregado_salario_bruto.salario_bruto - empregado_total_descontos.total_desconto) "Salario Liquidoaws"
FROM
	empregado JOIN departamento
	ON empregado.lotacao = departamento.cod_dep
    JOIN divisao
    ON empregado.lotacao_div = divisao.cod_divisao
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
    ON empregado.matr = empregado_salario_bruto.matricula
    JOIN
    (
      -- EMPREGADO TOTAL DESCONTOS
      SELECT
          empregado.matr matricula,
          SUM(COALESCE(desconto.valor, 0)) total_desconto
      FROM
          empregado LEFT JOIN emp_desc
          ON empregado.matr = emp_desc.matr
          LEFT JOIN desconto
          ON emp_desc.cod_desc = desconto.cod_desc
      GROUP BY
          empregado.matr
    ) empregado_total_descontos
    ON empregado.matr = empregado_total_descontos.matricula
GROUP BY
	departamento.cod_dep, 
    divisao.cod_divisao, 
    departamento.nome, 
    empregado.nome, 
    empregado_salario_bruto.salario_bruto,
    empregado_total_descontos.total_desconto
ORDER BY
	"Salario Liquidoaws" DESC,
    empregado.nome DESC
;