-- your code goes here
SELECT ROUND(
    100.0 * SUM(CASE WHEN rating >= 2200 THEN 1 ELSE 0 END) / COUNT(*),
    2
) AS percentage
FROM users;