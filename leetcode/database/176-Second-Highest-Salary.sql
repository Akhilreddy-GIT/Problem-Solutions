# Write your MySQL query statement below
SELECT (
    SELECT DISTINCT salary
    FROM Employee
    WHERE salary < (SELECT MAX(salary) FROM Employee)
    ORDER BY salary DESC
    LIMIT 1
) AS SecondHighestSalary;