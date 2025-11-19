# Write your MySQL query statement below
select p.firstName, p.lastName, addr.city, addr.state
from person p
left join address addr on p.personId = addr.personId;