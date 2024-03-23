# Write your MySQL query statement below
select s.student_id,s.student_name,sub.subject_name,count(e.subject_name) as attended_exams
from Subjects as sub cross join Students as s
left join Examinations as e
on s.student_id=e.student_id and sub.subject_name=e.subject_name
group by sub.subject_name,s.student_id
order by s.student_id,sub.subject_name;

