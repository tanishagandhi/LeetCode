# Write your MySQL query statement below
-- SELECT name from Employee where id in (SELECT managerId FROM Employee GROUP BY managerId HAVING COUNT(managerId) >= 5);

select a.name from Employee as a 
join Employee as b 
on a.id=b.managerId
group by a.id having COUNT(b.managerId) >= 5;