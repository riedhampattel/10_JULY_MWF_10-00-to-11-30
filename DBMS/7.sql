create table user
(id int primary key,
name varchar(45),
age int not null
);

insert into user values(101,'Rohan',25);
insert into user values(102,'Rahul',35);
insert into user values(103,'Margish',45);
insert into user values(104,'Diya',20);
insert into user values(105,'Shubham',21);

select * from user;

create table orders
(
order_number int not null,
order_id int not null,
id int not null,
foreign key (id) references user(id)
);

insert into orders values (789654,1,101);
insert into orders values (789653,2,101);
insert into orders values (789652,3,103);

select * from orders;

select * from user
natural join
orders;