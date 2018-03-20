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

- Create a class `Student` (remember how?) and its `__init__()` function. When you create a student, you want to provide their name and date of birth (TIP: separate day, month, year).

Answer the following question:

> Why do we write `__init__` and not just `init`?

- Test if your `Student` class works by creating a new Student, e.g. yourself.
- Within Student, create a method `calculate_age()` that (drumroll, please) calculates the Student's age in years.
  - To get access to today's date you can use the `datetime` module. Try this snippet of code:
    ```
    import datetime
    date_today = datetime.date.today()
    print(date_today.day)
    print(date_today.month)
    print(date_today.year)
    ```
  - Keep in mind that you also need to look at the day and months to get the correct age in year. If today's date is March 1st, then everyone born in February and January has already turned one year older.  
- Implement a function `__str__()` in such a way that it returns `Student tim is 23 years old.`. If said Student is in fact called `Tim` and is also 23 years old ;)

> What does `__str__` do for us?

- add a property `grades`. This should initially be an empty list.
- Within Student, implement a method `add_grade()` that allows you to add a grade to the Student's list of grades.
- Implement a method `gpa()`. This should return the Student's GPA, the average of all grades.

Lets put this code to use. Create a file called `student_data.csv` in the same folder as `classes.py`. Within said file copy-paste the following data:

```
Chia, 13, 7, 1990, 6.0, 5.5, 8.0, 7.5
Lennie, 24, 6, 1993, 5.0, 9.5, 8.5, 6.0
Milagros, 22, 3, 1997, 8.5, 7.0, 10.0, 6.0
Francoise, 11, 5, 1992, 7.0, 6.5, 7.5, 9.5
Joselyn, 12, 4, 1991, 10.0, 7.5, 9.5, 7.5
Ed, 15, 10, 1994, 7.5, 6.0, 6.0, 8.5
Jonathon, 19, 1, 1993, 10.0, 9.5, 5.5, 9.0
Theresia, 9, 11, 1992, 7.5, 9.0, 5.5, 10.0
Kristopher, 3, 12, 1996, 9.5, 6.5, 7.5, 6.0
Kecia, 3, 12, 1999, 6.0, 5.5, 9.5, 7.5
Cinthia, 6, 11, 1995, 7.0, 6.5, 6.5, 7.5
Kathleen, 16, 6, 1993, 9.0, 9.5, 7.0, 8.0
Sherron, 15, 6, 1992, 7.0, 8.5, 8.0, 10.0
Sandra, 16, 2, 1991, 9.5, 10.0, 6.0, 9.0
```

This datafile contains some basic information on every student. The first entry is the name, then comes the date of birth, and finally a list of four grades.

Now append the following code to `classes.py`:

```
# a list of students
students = []

# read the data
with open("student_data.csv", "r") as datafile:
  # for every line in the data
  for line in datafile:
    # if there is no data on the line, skip
    if not line.strip():
      continue

    # split line on every comma
    items = line.split(", ")
    print(items)

    # TODO
    # create a student

    # add student to list of students
    # students.append(...)

# print age and gpa information of every student
# for student in students:
#   print("{} and has a gpa of".format(student, student.gpa()))
```

This snippet of code opens the `student_data.csv` file, and reads every line of the file into a list called items. It's up to you to fill in the blanks. Create a Student from every line of data that is read and append said Student to the list of students.
