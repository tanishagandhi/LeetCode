select p.project_id, 
round(sum(e.experience_years)/count(case when e.experience_years is not null then 1 end),2) 
as average_years
from Project as p 
left join Employee as e 
on p.employee_id=e.employee_id 
group by p.project_id;

-- 