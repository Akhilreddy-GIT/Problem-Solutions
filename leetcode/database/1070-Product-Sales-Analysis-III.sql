# Write your MySQL query statement below
SELECT product_id, year AS first_year, quantity, price
from ( select *,
DENSE_RANK() OVER(PARTITION BY product_id ORDER BY year ASC) as rnk
from sales) as t
where t.rnk=1
