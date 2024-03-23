# Write your MySQL query statement below
select s.student_id,s.student_name,sub.subject_name,count(e.subject_name) as attended_exams
from Subjects as sub cross join Students as s
left join Examinations as e
on s.student_id=e.student_id and sub.subject_name=e.subject_name
group by sub.subject_name,s.student_id
order by s.student_id,sub.subject_name;

-- select b.student_id, b.student_name, a.subject_name,count(c.subject_name) as attended_exams
-- from subjects as a
-- cross join students as b
-- left join examinations as c
-- on b.student_id = c.student_id and a.subject_name = c.subject_name
-- group by b.student_id,a.subject_name
-- order by b.student_id;