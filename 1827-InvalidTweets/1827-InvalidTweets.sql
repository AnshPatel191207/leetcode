-- Last updated: 06/08/2026, 11:22:15
select tweet_id from Tweets
where char_length(content)>15;