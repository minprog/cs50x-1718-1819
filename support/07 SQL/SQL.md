# SQL Practice

## Goal

We are going to practise some SQL statements!

## Getting started

First create a new directory and step into it:

	mkdir ~/workspace/section7
	cd ~/workspace/section7


Then download the `practice.db` database file for this problem:

	wget https://cs50x.mprog.nl/course/sections/07%20SQL/sql.zip
	unzip sql.zip
	rm sql.zip

Make sure you are in the right directory and have the `practice.db` file by using `cd` and `ls`. Then run:

	phpliteadmin practice.db

The database should now be running. Open the link that comes after `Running phpLiteAdmin at`

You should see three tables: `user`, `pet` and `ownership`. Click through the tables in the database to get an understanding of how they are set up.

## Let's go!

While in the practice database or one of its tables, go to te `SQL` tab. In there you are going to write some SQL statements to manage the content of the database.

Write and execute statements for the following situations. For the first situation you can try it in one statement, but to create the three users separately is also fine. For the others you should be able to use **only one statement per situation**, if you assume to "know" the id of a user from a previous statement.

- Create three new users: "Lisa", "Tom" and "Denny"
- Lisa owns a dog
- Tom owns two cats
- Denny owns a bunny
- Lisa buys five new fish
- One of Lisa's fish dies :(
- How many cats does Tom own?
- How many **pets** does each user own?
