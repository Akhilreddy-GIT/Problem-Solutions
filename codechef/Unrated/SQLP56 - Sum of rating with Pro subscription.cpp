-- your code goes here

SELECT SUM(rating) AS pro_peoples
FROM users
WHERE pro_plan=1;