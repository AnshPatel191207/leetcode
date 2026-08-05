-- Last updated: 05/08/2026, 11:20:40
SELECT email AS Email
FROM Person
GROUP BY email
HAVING COUNT(email) > 1;