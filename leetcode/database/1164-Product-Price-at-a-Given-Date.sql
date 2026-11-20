WITH all_products AS (
    SELECT DISTINCT product_id FROM Products
),
ranked AS (
    SELECT
        product_id,
        new_price,
        ROW_NUMBER() OVER (
            PARTITION BY product_id
            ORDER BY change_date ASC       -- ascending inside window
        ) AS rn
    FROM Products
    WHERE change_date <= '2019-08-16'
),
latest AS (
    SELECT r.product_id, r.new_price
    FROM ranked r
    WHERE r.rn = (SELECT MAX(rn) FROM ranked r2 WHERE r2.product_id = r.product_id)
)
SELECT
    p.product_id,
    COALESCE(l.new_price, 10) AS price
FROM all_products p
LEFT JOIN latest l ON p.product_id = l.product_id;