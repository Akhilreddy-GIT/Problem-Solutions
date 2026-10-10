SELECT t.name AS team_name,
       COUNT(u.email) AS user_count
FROM teams t
JOIN users u
    ON t.team_id = u.team_id
GROUP BY t.team_id, t.name
HAVING COUNT(u.email) > 0
ORDER BY team_name ASC;