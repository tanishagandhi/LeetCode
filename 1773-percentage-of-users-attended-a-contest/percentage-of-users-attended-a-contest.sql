# Write your MySQL query statement below
select r.contest_id,
round((count(r.user_id)/(select count(c.user_id) from users as c))*100,2) 
as percentage
from Register as r 
left join Users as u 
on r.user_id=u.user_id 
group by r.contest_id 
order by percentage desc,r.contest_id;