# Write your MySQL query statement below
SELECT e.name as Employee
FROM employee e
JOIN employee ee ON e.managerId = ee.id
WHERE e.salary > ee.salary