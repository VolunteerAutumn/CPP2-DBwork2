use Academy
----1
select Name, Finances, Id
from Departments;
----2
select Name as [Group Name], Rating as [Group Rating]
from Groups;
----3
select Surname, Salary / Premium * 100 as SalaryPercent, Salary / (Salary + Premium) * 100 as SalaryPercentByPrem
from teachers;
----4
select 'The dean of faculty ' + Name + ' is ' + dean as INFO
from Faculties;
----5
select surname as [Most Valuable Professors]
from Teachers
where salary > 1050 and IsProfessor = 1;
----6
select Name as [Name]
from Departments
where Finances < 25000 and Finances > 11000
----7
select Name
from Faculties
where Name != 'Computer Science'
----8
select Surname, Position
from Teachers
where IsProfessor = 0;
----9
select Surname, Position, Salary, Premium
from Teachers
where IsAssistant = 1 and Premium > 160 and Premium < 550
----10
select Surname, Salary
from Teachers
where IsAssistant = 1
----11
select Surname, Position
from Teachers
where EmploymentDate < '2000-01-01'
----12
select Name as [Name of Department]
from Departments
where Name <= 'Software Development'
order by Name asc
----13
select Surname
from Teachers
where (Salary + Premium) <= 1200
----14
select Name
from Groups
where Year = 5 and Rating <= 4 and Rating >= 2
----15
select Surname
from Teachers
where IsAssistant = 1 and (Salary < 550 or Premium < 200)
---- Well... here it is.
