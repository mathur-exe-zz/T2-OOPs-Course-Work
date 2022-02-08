drop database hr_db;
create database hr_db;
use hr_db;

create table Employee (
	empID int(11) NOT NULL, 
    firstName varchar(20) NOT NULL,
    lastName varchar(20) NOT NULL,
    jobTitle varchar(40) NOT NULL,
    salary int(20) NOT NULL,
    officeID varchar(10) NOT NULL
    );
describe Employee;
insert into Employee values(001,'Joe','Jones','Administrative Assistant',20000,'A01');
insert into Employee values(002,'Lucas','Brown','Executive Assistant',40000,'A04');
insert into Employee values(003,'Lily','Garcia','Marketing Manager',60000,'C08');
insert into Employee values(004,'Samuel','Miller','Customer Service Representative',120000,'B02');
insert into Employee values(005,'Stella','Davis','Nurse Practitioner',50000,'B01');
insert into Employee values(006,'Ethan','Rodriguez','Software Engineer',80000,'C11');
insert into Employee values(007,'Olivia','Lopez','Sales Manager',90000,'B01');
insert into Employee values(008,'Immanuel','Kant','Office Assistant',1300000,'B03');
insert into Employee values(009,'Friedrich','Nietzsche','Software Ninjaneer',250000,'C02');
insert into Employee values(010,'John','Searle','SQL Developer',200000,'A09');
select * from Employee;
select empID, firstName, salary from Employee;
select * from Employee where salary>60000;
select * from Employee where officeID=B01;
select distinct * from Employee;
select * from Employee order by salary desc;

describe Employee