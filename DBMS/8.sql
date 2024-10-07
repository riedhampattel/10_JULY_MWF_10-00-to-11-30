delimiter &&
create procedure display_data()
select * from employees;
end &&

call display_data();

drop procedure display_data;

delimiter &&
create procedure display_info(in did int)
begin
select * from employees where department_id = did;
end &&

call display_info(90);
call display_info(60);
call display_info(50);

select * from employees;

create view emp_info as select employee_id,first_name,last_name from employees;

select * from emp_info;