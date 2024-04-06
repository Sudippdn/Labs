--Lab 4
drop table if exists tbl_Employee
CREATE TABLE tbl_Employee
(
FirstName varchar(32),
MiddleName varchar(32),
LastName varchar(32),
Age int,
);

insert into tbl_Employee(FirstName,MiddleName, LastName, Age)
values('Ram','Prashad', 'Neupane',42),
	  ('Hari','Kumar','Paudel', 33),
	  ('Hari', 'Kumar', 'Paudel', 33);
		
select * from tbl_Employee
select DISTINCT * from tbl_Employee

