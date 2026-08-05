-- Last updated: 05/08/2026, 11:20:38
select c.name as customers
from Customers c
left join Orders o
on c.id = o.customerId
where o.customerId is null;