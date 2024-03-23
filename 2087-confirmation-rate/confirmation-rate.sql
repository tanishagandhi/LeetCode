# Write your MySQL query statement below
select s.user_id,COALESCE(round(count(c.action)/(select count(b.action) from Confirmations b where s.user_id = b.user_id),2),0)
 as confirmation_rate
from Signups as s 
left join Confirmations as c on s.user_id=c.user_id and c.action='confirmed'
group by s.user_id;
