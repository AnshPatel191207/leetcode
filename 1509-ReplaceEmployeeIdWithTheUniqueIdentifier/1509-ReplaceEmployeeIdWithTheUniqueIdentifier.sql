-- Last updated: 06/08/2026, 11:22:38
select u.unique_id, s.name
from Employees s
left join EmployeeUNI u
on s.id = u.id;