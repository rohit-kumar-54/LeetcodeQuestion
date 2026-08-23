# Write your MySQL query statement below


-- SELECT e.name AS name , b.bonus AS bonus
-- FROM Employee e
-- LEFT JOIN Bonus b
-- ON e.empId = b.empId
-- WHERE b.bonus < 1000 OR b.bonus is null;


select e.name ,b.bonus 
from Employee e
left join Bonus b
on e.empId=b.empId 
where b.bonus<1000 or b.bonus is null;