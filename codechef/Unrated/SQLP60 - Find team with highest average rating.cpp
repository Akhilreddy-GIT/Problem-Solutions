-- your code goes here
SELECT t.name AS team_name,
       COUNT(u.email) AS user_count,
       ROUND(AVG(u.rating), 2) AS highest_avg_rating
FROM teams t
JOIN users u
    ON t.team_id = u.team_id
GROUP BY t.team_id, t.name
HAVING AVG(u.rating) = (
    SELECT MAX(avg_rating)
    FROM (
        SELECT AVG(u2.rating) AS avg_rating
        FROM users u2
        WHERE u2.team_id IS NOT NULL
        GROUP BY u2.team_id
    ) AS team_averages
);