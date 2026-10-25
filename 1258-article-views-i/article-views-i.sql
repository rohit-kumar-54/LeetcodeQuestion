# Write your MySQL query statement below

-- SELECT 
--     Distinct author_id as id
-- FROM
--     Views
-- WHERE
--     author_id = viewer_id order by id ASC;



-- Revision

SELECT
    DISTINCT(author_id) AS id
FROM
    Views
Where
    author_id = viewer_id 
ORDER by id ASC;












