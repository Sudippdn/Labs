-- Lab 9: 2080/10/25
-- drop database if exists Employee
 --create database Employee

use Employee
drop table if exists employee_tab
create table employee_tab
(
EmpId int primary key,
FirstName varchar(50),
LastName varchar(50),
Salary int,
Mobile varchar(50)
)

insert into employee_tab values
(1001, 'Aayusmhi', 'Adhikari', 100000, 9800000000),
(1002, 'Salini','Jha', 10000, 98000000),
(1003, 'Ram','Gupta', 433000, 9899898)

delete from employee_tab where EmpId = 1003
select * from employee_tab


update employee_tab
set FirstName = 'Ram'
Where EmpId = 1002