-- lab 5
drop table if exists tbl_Employee1
create table tbl_Employee1
(
id int primary key,
FirstName varchar(32) NOT NULL,
MiddleName varchar(32),
LastName varchar(32) not null,
Age int not null,
);


insert into tbl_Employee1(id, FirstName, LastName, Age)
values
(22,'Krishna','Sitaula',44),
(23,'Hari', 'Gupta', 34),
(24, 'Bibek','Thapa', 54),
(25, 'Krishna','Bartaula',34);

select * from tbl_Employee1

