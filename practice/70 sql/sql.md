# SQL

## Getting started

Visit w3school's [SQL editor](https://www.w3schools.com/sql/trysql.asp?filename=trysql_select_all). All following exercises will apply on the databases provided with this editor.

## Goal

Getting familiar with SQL databases.

## Deliveries

You work at MaliExpress, a fast growing on-line food company in Africa with residencies on all continents. The company just expanded to world wide delivery and has asked you to ensure all data is properly stored in the company's SQL database. To do that, you execute a few tests on the database.

- In the entry field, select all customers the company currently delivers to.

As you may notice, customers from all over the world have registered. Take a good look at the customer database to get familiar.

- Select all customers from Germany, but only their `CustomerName` and `City`

- Select _Die Wandernde Kuh_ by using their `CustomerID`

- Select all customers _except_ those residing in Germany.

Due to a special event, all customers in either London or Madrid get a discount on their deliveries.

- Select all customers that are eligible for this discount with one statement

Customers from the USA pay extra because, well, it's the USA.

- Select all `CustomerID`s that pay the _regular_ shipping fee.

Now that selection seems to work fine, we try to register some new clients.

- Add a new customer to the database (e.g. Minor Programming, or yourself)

> What happens if you forget to insert data for a specific column?

Suppose a customer moves, and changes their address on our website. This should execute an SQL command which changes the customers address in the database.

- Change the address of our contact _Thomas Hardy_ to the next street over, 22 Maddox St.

Whelp, due to the Brexit the UK population has decided they want their capital no longer be associated with present affairs and rename it as the Romans once called it, _Londinium_.

- Change all entries of London to the new name

- Change all contacts in London to 'Julius Caesar'

Due to political reasons, your company no longer affiliates with France (je ne comprend pas?).

- Remove all entries of French customers

Let's move on to our Products database.

- List all products currently in stock

- Count the number of products in stock (with a statement, we know you can count)

- Find the average price of all products

- Find the maximum price of all products

Someone ordered all products of 'Chef Anton'. We can select those easily with one statement.

- Select all products with 'Chef Anton' but only show their prices

## Exploits of a mom

With everything looking good, take a look at the following [xkcd](https://xkcd.com/) comic.

![Exploits of a mom](https://imgs.xkcd.com/comics/exploits_of_a_mom.png)

> Explain why this is funny.

> Explain what the school should have done in order to prevent this.
