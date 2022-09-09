-- Document User with Matcher: function
SELECT userID FROM MarkdownDocument
LEFT OUTER JOIN Users ON Users.userID=MarkdownDocument.userID
WHERE markdownID NOT IN (SELECT svRegionID from SVRegion
WHERE svRegionID <> 0 OR svRegionID 3000
GROUP BY svRegionID ASC);
-- svRegionID of: 3000 ---- this is the Region Code for Melbourne