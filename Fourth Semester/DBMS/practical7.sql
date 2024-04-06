-- Lab No.7
drop table if exists Lab7
create table Lab7
(roll_no int,
name varchar(50),
birth_date int
);

insert into Lab7 Values
(03, 'Aayushmi', 2004),
(13, 'Salini', 2002),
(19, 'Sudip', 2001);

select * from Lab7

ALTER Table Lab7
add Email varchar(50)

insert into Lab7 Values
(03, 'Aayushmi', 2004,'aayushmi@gmail.com'),
(13, 'Salini', 2002, 'aayushmi@gmail.com'),
(19, 'Sudip', 2001, 'sudip@gmail.com');
select * from Lab7

