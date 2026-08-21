# Write your MySQL query statement below
-- select name from Customer where referee_id != 2 OR referee_id is null;


-- Another way to write this query

SELECT
    name
FROM
    Customer
WHERE 
    IFNULL(referee_id , 0) != 2;
