# Write your MySQL query statement below
select d.name as 'Department',e.name as 'Employee',e.salary as 'Salary'
from Employee e left join Department d
on e.departmentId=d.id where e.salary in
(select max(salary) from Employee where departmentId=e.departmentId); 