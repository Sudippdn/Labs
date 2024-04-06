drop table if exists tab1
create table tab1
(
Num1_ID int,
);

insert into tab1(Num1_ID)
values(12), (14), (10), (11)

drop table if exists tab2
create table tab2
(
Num2_ID int,
);

insert into tab2(Num2_ID)
values (13), (11), (15), (12)

select * from tab1
select * from tab2
select * from tab1 Inner Join tab2 ON tab1.Num1_ID = tab2.Num2_ID