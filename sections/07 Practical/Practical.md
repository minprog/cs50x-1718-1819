# Practical

## Goal

...

## Getting started

First create a new directory and step into it:

    mkdir ~/workspace/section7
    cd ~/workspace/section7

### Downloading

    wget https://cs50x.mprog.nl/course/sections/07%20Practical/practical.zip
    unzip practical.zip
    rm practical.zip
    cd practical
    ls
    application.py  practical.db requirements.txt  static/  templates/

## Specification

In this assignment you have to make an application to register the subgroups of a workgroup.

- The framework of the website and the database have already been set up.
- Finish the website with a complete registration form
- Actually register the groups in the database
- After the user is registered, you should redirect to the overview of the registered groups.

## Running

Install this problem’s dependencies (within practical/):

    pip3 install --user -r requirements.txt

Start Flask’s built-in web server (within practical/):

    flask run

Select CS50 IDE > Web Server to see the distribution code in action.
In another terminal window, start phpLiteAdmin (within practical/):

    phpliteadmin practical.db

And open the URL that phpliteadmin outputs in a new tab. Notice how practical.db comes with a table called groups. This is where the groups will be registered.

## Application

Open up `application.py`. Atop the file are a bunch of imports and configurations. No need to change those.
What you need to do is complete the registration form and implement the register route, for when the user submits the form (via POST). You can make use of the apology function if needed.
After the user is registered, you should redirect to the overview of the registered groups.
Now, let's take a look at the functions in `application.py`

### `index()`

When the user visits the homepage he/she is redirected to the register page.

### `register()`

When the user visits the register page via POST, it means a form was submitted. You can see a TODO here. It is up to you to make sure the fields from the form are imported into the database.
When the user reaches the page via GET, the html form is rendered.

### `overview()`

This function selects everything from the database is displays it via the overview template. On this page you can see all the groups that are registered, and thus check if your register function works.

### `apology()`

This function renders an apology to the user when something goes wrong. Whatever string you give as an argument will be displayed with the apology.

### register.html

Inside the templates folder is a file called `register.html`. This is the form where the user can fill in the details of the group registration. Right now it only contains a field for the group name. You need to complete the form so it corresponds to the fields in the group table. Via phpliteadmin you can view the structure of the database table.
Let's get started!

## Done?

Got time left? First, check if you have error checked the user's input in every way and rendered apologies for everything. 
If you've done that you can improve you application by making a seperate student table, in which the students are registered. The groups table should then reference to the students via their ID. You are allowed to change the groups table and anything else you think you need. What should happen if the same student is part of multiple groups?

