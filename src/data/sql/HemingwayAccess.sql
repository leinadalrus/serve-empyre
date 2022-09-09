CREATE TABLE MarkdownDocument {
  markdownID INT NOT NULL,
  userID INT NOT NULL,
  documentName VARCHAR(254),
  contentBody VARCHAR,
  PRIMARY KEY (markdownID),
  FOREIGN KEY (userID) REFERENCES Users(userID)
};

CREATE TABLE Users {
  userID INT NOT NULL,
  username VARCHAR(254),
  firstname VARCHAR(254),
  lastname VARCHAR(254),
  PRIMARY KEY (userID)
};