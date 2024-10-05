create role admin;

create role faculty;

create user 'Rohan' identified by 'abc@123' default role admin;

create user 'Sakshi' identified by 'abc@1234' default role faculty;

grant select on employees to 'Rohan';

grant update on employees to 'Rohan';

revoke update on employees from 'Rohan';

revoke select on employees from 'Rohan';