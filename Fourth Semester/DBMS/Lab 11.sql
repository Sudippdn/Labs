drop table if exists Supplier1
create table Supplier1
(
ID int,
Name varchar(50),
S_code int,
Deposit int
)
select * from Supplier1

alter table Supplier1
add PINCODE int, city varchar(50)
select * from Supplier1

alter table Supplier1
Add ID1 int primary key
select *from Supplier1