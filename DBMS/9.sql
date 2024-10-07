create table student
(
id int not null,
name varchar(45) not null,
maths int not null,
english int not null,
total int
);

create trigger add_data
before insert on student
for each row
set new.total = new.maths + new.english;

select * from student;

insert into student(id,name,maths,english) values(101,'Shyam',85,85);
insert into student(id,name,maths,english) values(102,'Abhay',75,95);
insert into student(id,name,maths,english) values(103,'Manav',35,25);
insert into student(id,name,maths,english) values(104,'Hardik',40,78);
insert into student(id,name,maths,english) values(105,'Virat',12,57);

select * from student;

create table orgdata
(
id int not null,
name varchar(45) not null
);

select * from orgdata;

create table cpydata
(
name varchar(45) not null,
copy_time time
);

select * from cpydata;

create trigger copy_data
after insert on orgdata
for each row
insert into cpydata values(new.name,curtime());

insert into orgdata values(101,'Steven');
insert into orgdata values(102,'Mark');
insert into orgdata values(103,'Trump');
insert into orgdata values(104,'Manoj');
insert into orgdata values(105,'Devarsh');

select * from orgdata;

select * from cpydata;