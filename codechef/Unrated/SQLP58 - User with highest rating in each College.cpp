-- your code goes here
SELECT u.college, u.user_name
FROM users u
WHERE u.rating = (
    SELECT MAX(u2.rating)
    FROM users u2
    WHERE u2.college = u.college
);