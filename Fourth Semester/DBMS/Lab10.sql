drop table if exists custmer10
create table customer10
(
Cust_No int primary key,
LName varchar(50),
FName varchar(50),
Addr varchar(30),
City varchar(50),
States varchar(50),
PIN varchar(50),
Birth_date date
)
select * from customer10
insert into customer10 values
(45, 'Adhikari', 'Pratima', 'Morang', 'Ithari', 'Koshi', 4564, '06-May-2002'),
(65, 'Pradhan','Sudip', 'Morang', 'Madhumalla', 'Koshi', 7533, '12-June-2001'),
(23, 'Sodari', 'Rabin', 'Kaski', 'Pokhara', 'Gandaki', 4944, '14-Jan-2000')

insert into customer10(Cust_No, LName, FName) values
(91, 'Sharma', 'Ashis'),
(53, 'Pandey', 'Ashis'),
(64, 'Asma', 'Sarita')

Select LName From Customer10
-- select * from customer10
select * from customer10
where States = 'Koshi'

select FName, LName from customer10

-- order
select LName, FName, PIN, States
from customer10
order by States


-- Descending order

Select FName, LName, PIN, States
from customer10
order by States Desc

--  Ascending order
select FName, LName, PIN, States
from customer10
order by states asc

-- sort by  lastName

select FName, LName, PIN, States
from customer10
order by LName,States 
















