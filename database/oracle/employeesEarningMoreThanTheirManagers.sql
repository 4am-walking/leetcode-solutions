/* Write your PL/SQL query statement below */
select b.name as Employee from employee a, employee b
where a.id = b.managerid
and b.salary > a.salary
