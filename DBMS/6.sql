select * from employees;

delete from employees where employee_id = 206;
delete from employees where employee_id = 205;
delete from employees where employee_id = 202;

select * from employees;

rollback;

select * from employees;

delete from employees where employee_id = 206;
delete from employees where employee_id = 205;
delete from employees where employee_id = 202;

select * from employees;

commit;

rollback;

select * from employees;

create table demo
(
id int not null,
name varchar(45)
);

insert into demo values(101,'Rohan');
insert into demo values(102,'Rahul');
insert into demo values(103,'Sakshi');
insert into demo values(104,'Keyur');
insert into demo values(105,'Shubh');

commit;

select * from demo;

rollback;

select * from demo;

delete from demo where id = 101;
delete from demo where id = 103;
delete from demo where id = 105;

select * from demo;

rollback;

select * from demo;

savepoint s1;
delete from demo where id = 101;
savepoint s2;
delete from demo where id = 103;
savepoint s3;
delete from demo where id = 105;

select * from demo;

rollback to s2;

select * from demo;