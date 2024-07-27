# Write your MySQL query statement below
select
CASE
    WHEN id=(select max(id) from Seat) and id%2=1 THEN id
    WHEN id%2=0 THEN id-1
    WHEN id%2=1 THEN id+1
    end as id,
student
from Seat order by id;