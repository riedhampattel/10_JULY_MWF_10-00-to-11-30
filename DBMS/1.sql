create schema emp2;

create table Employees
(
employee_id int not null unique,
first_name varchar(15) not null,
last_name varchar(15) not null,
hire_date date not null,
salary int not null,
commission_pct float,
manager_id int,
department_id int
);

describe employees;

-- rename table
alter table employees rename to emp_data;
alter table emp_data rename to employees;

describe emp_data;

-- rename column
alter table employees rename column first_name to fname;
alter table employees rename column fname to first_name;

describe employees;

-- add column
alter table employees add column job_id int not null;
alter table employees add column job_id int not null after hire_date; 

-- delete column
alter table employees drop column job_id;

-- modify column
alter table employees modify manager_id varchar(45) not null;
alter table employees modify manager_id int;

describe employees;

drop table employees;

describe employees;

drop schema emp2;

commit;