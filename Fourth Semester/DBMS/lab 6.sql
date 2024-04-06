	-- 2080/10/18
	-- lab 6

	drop table if exists STDNT_ADD
	Create table STDNT_ADD
	(
	Roll_No int primary key,
	Names varchar(50),
	Address varchar(50),
	Place varchar(50),
	Pin varchar(50)
	);

	CREATE TABLE STDNT_MARKS
	(
	Roll_No int References STDNT_ADD ON DELETE CASCADE,
	Subjects varchar(50),
	Exam_date date,
	Marks numeric(3)
	);


	select *
	from STDNT_ADD

	select *
	from STDNT_MARKS