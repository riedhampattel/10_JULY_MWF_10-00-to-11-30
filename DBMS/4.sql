select employee_id,first_name from employees;

select * from employees;

select * from employees where department_id = 60;

select first_name as NAME from employees;

select * from employees;

select employee_id,first_name,salary*12 as Annual_Salary from employees;

select employee_id,concat(first_name,last_name) as full_name from employees;

select employee_id,concat(first_name,concat(' ',last_name)) as full_name from employees;

select * from employees where department_id = 90 or department_id = 60;

select * from employees where department_id = 90 and department_id = 60;

select * from employees where salary>=10000 and salary<=20000;

select * from employees where department_id in (90,60,50);

select * from employees where department_id not in (90,60,50);

select * from employees where (department_id,manager_id) in ((90,100),(60,110));

select * from employees where (department_id,manager_id) not in ((90,100),(60,110));

select * from employees where department_id not in (90,60,50);

select * from employees where salary between 10000 and 20000;

select * from employees where first_name like '%e';

select * from employees where first_name like '%ee%';

select * from employees where first_name like '%e%';

select * from employees where first_name like '%e_';

select * from employees where hire_date like '%-J_n-%';

select * from employees where hire_date like '%-Ju_-%';

select * from employees order by salary;

select * from employees order by salary asc;

select * from employees order by salary desc;

select * from employees order by 5;

select salary as tankha from employees order by tankha;

select * from employees where commission_pct is not null;

select * from employees where commission_pct is null;

select min(salary) from employees;

select max(salary) from employees;

select count(commission_pct) from employees;

select sum(salary) from employees;

select avg(salary) from employees;

select * from employees;

select department_id,min(salary) from employees group by department_id;

select department_id,max(salary) from employees group by department_id;

select department_id,count(*) from employees group by department_id;

select department_id,sum(salary) from employees group by department_id;

select department_id,avg(salary) from employees group by department_id;

select department_id,max(salary) from employees group by department_id having max(salary)>10000;

select department_id,max(salary) from employees where hire_date like '%-J_n-%' group by department_id having max(salary)>10000 order by 2;

select * from employees order by salary desc limit 5;

select * from employees order by salary desc limit 5 offset 15;