-- Last updated: 05/08/2026, 11:15:39
select user_id, count(follower_id) as followers_count
from Followers
group by user_id
order by user_id asc;