# Write your MySQL query statement below
SELECT name, unique_id from Employees e
LEFT JOIN EmployeeUNI eu
ON e.id = eu.id;