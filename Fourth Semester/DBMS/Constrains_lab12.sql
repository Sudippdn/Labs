-- Constrains 
drop table if exists Dept
create table Dept
(Dept_ID int primary key,
Dept_Name varchar(50)
)

insert into Dept 
Values (2001, 'CSIT'),
(2002, 'BSA'),
(2003, 'Management')
select *
from Dept


drop table if exists Emp
create table Emp
(Emp_Id int not NULL,
Name varchar Not null,
Age int not null,
Address varchar(40) Default 'Nepal',
Salary int not null,
primary key(Emp_Id),
foreign key(Dept_ID) references Dept(Dept_ID),
check(age>=18)
);

