insert into employees values(101,'Rohan','Patel','2024-08-25',45000,null,105,90);
insert into employees values(102,'Rahul','Kumar','2024-08-25',45000,null,105,90);

select employee_id,first_name from employees;
select * from employees;

update employees set last_name = 'Shah' where employee_id = 101;

select * from employees;

delete from employees where employee_id = 102;

truncate employees;

select * from employees;

describe employees;

commit;