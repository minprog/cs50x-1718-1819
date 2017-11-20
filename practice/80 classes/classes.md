# Object Oriented Programming

## Refresher

You probably need a little refresher on objects and classes. In the video below, have a good look at the explanation, starting at 27:30.

![embed](https://www.youtube.com/embed/8xCzjOnfQbw)

## Getting started

Execute in a terminal window

    mkdir -p ~/workspace/practice/classes
    cd ~/workspace/practice/classes/
    touch classes.py

## Goal

Getting familiar with OOP in Python by creating your own class.

## Personalia

We're working with the personalia of the students and staff and are looking for a proper datastructure. It's up to you to provide that structure, by making use of Python `classes`. This means we're creating objects to hold information and functionality for us, so that we can easily create multiple students without too much copy-and-pasteing.

- Create a class `Person` (remember how?) and its `__init__()` function. When you create a person, you want to provide their name and date of birth (TIP: separate day, month, year).

Answer the following question:

> Why do we write `__init__` and not just `init`?

- Test if your `Person` class works by creating a new Person, e.g. yourself.
- Within Person, create a method `calculate_age()` that (drumroll, please) calculates the Person's age.
- Implement a function `__str__()` in such a way that it returns `Tim is 23 years old.`

> What does `__str__` do for us?

- Create a second class `Student`, which _inherits_ from `Person`.

Answer the following question:

> Why would it be beneficial to have Student inherit from Person?

- Implement Student in such a way that on initialisation, you provide their study field aswell.
- Implement a variable `grades`. This should initally be an empty list.
- Within Student, implement a function `add_grade()`.
- Implement a function `calculate_mean()`. This should return the Student's GPA.
- Implement a function `__str__()` in such a way that it returns `Tim's GPA is 8.0.` when called (this should work for any student).

> What happens with the `__str__` method in Person now that we made another in Student?

HINTS:

- For today's date, you can use the [datetime](https://docs.python.org/2/library/datetime.html) library class `date` and calling `date.today()`.
- The number of days difference between two dates can be calculated by using `your_difference.days`.
- To import specific parts of a library, you can use `from a import b`.
