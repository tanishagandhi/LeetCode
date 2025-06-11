# Write your MySQL query statement below
select score, DENSE_RANK() over (Order by score desc) as 'rank'
from Scores;