# Write your MySQL query statement below
-- Wrong beacause null not converted into integer

-- SELECT s.user_id, ROUND(SUM(action = 'confirmed')/count(*), 2) AS confirmation_rate
-- FROM Signups s
-- LEFT JOIN Confirmations c
-- ON s.user_id = c.user_id

-- GROUP BY s.user_id;



-- Right approach

SELECT s.user_id, IFNULL(ROUND(SUM(action = 'confirmed')/count(*), 2), 0.00) AS confirmation_rate
FROM Signups s
LEFT JOIN Confirmations c
ON s.user_id = c.user_id

GROUP BY s.user_id;

