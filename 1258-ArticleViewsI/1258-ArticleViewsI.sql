-- Last updated: 06/08/2026, 11:22:49
select distinct author_id as id from Views
where author_id = viewer_id
order by id asc;