# Write your MySQL query statement below
SELECT Products.product_name, SUM(unit) as unit
FROM Products
LEFT JOIN Orders
ON Products.product_id=Orders.product_id
WHERE YEAR(order_date)=2020 AND MONTH(order_date)=2
GROUP BY product_name
HAVING SUM(unit)>99;