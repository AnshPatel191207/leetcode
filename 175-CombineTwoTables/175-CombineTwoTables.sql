-- Last updated: 05/08/2026, 11:20:49
select p.firstName, p.lastName, a.city, a.state
from Person p
left join Address a
on p.personId = a.personId;