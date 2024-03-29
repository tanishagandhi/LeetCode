SELECT 
    query_name,
    ROUND(AVG(rating / position), 2) AS quality,
    ROUND((COUNT(CASE WHEN rating < 3 THEN 1 END) / COUNT(query_name)) * 100, 2) AS poor_query_percentage
FROM 
    Queries
GROUP BY 
    query_name
having query_name is not null;
