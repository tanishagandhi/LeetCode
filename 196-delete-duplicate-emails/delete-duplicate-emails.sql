# Write your MySQL query statement below
delete p from Person p join Person d
on p.email=d.email AND p.id>d.id;