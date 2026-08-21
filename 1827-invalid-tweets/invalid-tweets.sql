# Write your MySQL query statement below
SELECT 
    tweet_id
FROM 
    Tweets
WHERE
    -- length(content) > 15;
    CHAR_LENGTH(content) > 15;