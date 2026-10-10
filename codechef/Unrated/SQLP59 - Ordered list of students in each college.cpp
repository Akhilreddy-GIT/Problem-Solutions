-- your code goes here
SELECT college, COUNT(*) AS user_count
FROM users
WHERE college IS NOT NULL
GROUP BY college
ORDER BY user_count ASC;