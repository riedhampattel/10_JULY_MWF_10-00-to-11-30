select * from employees;

alter table employees modify hire_date varchar(15) not null;

update employees set hire_date = date_format(hire_date,'%d-%b-%y');

select * from employees;

insert into employees values(100,'Steven','King','17-Jul-87',24000,null,null,90);
insert into employees values(101,'Neena','Kochhar','21-Sep-89',17000,null,100,90);

select * from employees;