-- Last updated: 06/08/2026, 11:27:46
select p.product_name, s.year, s.price
from Sales s
left join Product p
on s.product_id = p.product_id;