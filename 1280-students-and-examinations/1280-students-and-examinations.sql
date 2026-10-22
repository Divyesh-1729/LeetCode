# Write your MySQL query statement below

SELECT Students.student_id,Students.student_name, Subjects.subject_name, COUNT(Examinations.subject_name) AS attended_exams
FROM Students
CROSS JOIN Subjects
LEFT JOIN Examinations
ON Students.student_id=Examinations.student_id AND Subjects.subject_name=Examinations.subject_name
GROUP BY Subjects.subject_name, Students.student_name,Students.student_id
ORDER BY Students.student_id,Subjects.subject_name;