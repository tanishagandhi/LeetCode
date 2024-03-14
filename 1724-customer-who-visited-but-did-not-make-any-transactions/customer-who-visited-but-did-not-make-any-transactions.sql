# Write your MySQL query statement below
select v.customer_id,count(visit_id) as count_no_trans
from Visits as v where visit_id not in (select visit_id from Transactions as t) group by customer_id;
-- SELECT DISTINCT v.customer_id,count(v.customer_id) AS count_no_trans
-- FROM visits v
-- LEFT JOIN transactions t ON v.visit_id = t.visit_id where t.transaction_id is NULL 
-- group by v.customer_id;