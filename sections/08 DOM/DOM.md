# Document Object Models

## Goal

For this weeks assignment you and your team will complete a series of small JavaScript assignments in your browser.

## Getting started

Start by opening the developer tools by pressing <kbd>F12</kbd> in Windows (Google Chrome & Mozilla Firefox) or <kbd>Cmd</kbd> + <kbd>Opt</kbd> + <kbd>I</kbd> on Mac (Google Chrome & Mozilla Firefox).
Next, visit [this](https://niettimmeijer.github.io/Week8GO/go.html) page. The assignment below applies to this page.
Notable tools within this kit (for this assignment) are the `Elements` and `Console` tabs. In short, the `Elements` tab is a way of viewing the [DOM](https://en.wikipedia.org/wiki/Document_Object_Model) of a website. The "Console" tab is an active JavaScript console. The JavaScript that was downloaded when accessing the website can acces this console. After the page is done loading, the console can also be used with JavaScript (these scripts will only be run on your computer and will not affect anyone else).  

## Specification & tips

Complete all assignments as noted below. Don't worry if the console logs `undefined` often! This is a standard return value for many functions. Remember void functions in C?
If you wish to learn more about the developer tools click here for [Google Chrome](https://developer.chrome.com/devtools) and here for [Mozilla Firefox](https://developer.mozilla.org/son/docs/Tools).

## Assignments

### Basics

0. Open the console.
1. Log "Hello World!" to the console.
2. Save an integer in a variable and then log it to the console.
3. Save a string in a variable and then log the type of that variable.
4. Make a pop up appear with the text "Hello World!".

### Objects

5. Open the tab "Elements" in the developer toolkit and find a prewritten variable.
6. Log this variable.
7. Log the type of this variable.
8. Log the name of the movie, by indexing into the object.
9. Make the object log its own release date.

### DOM/JQuery

10. Use JQuery to push "Hello World!" to the div with the id of "pushText".
11. Use JQuery to add your names to the text "Our names are: ".
12. Use JQuery to change the color of "This text is blue" to blue.
13. Use JQuery to change to color of the rectangle to orange.
14. Push the responseText of "data.json" to the div with the id "pushData". You can find this JSON [here](https://niettimmeijer.github.io/Week8GO/data.json). HINT: Use $.getJSON() as described in lecture 10.
15. Parse the responseText to a JSON, and save this in a variable. Then push one of the values to the div with the id "jsonValue".

## HINT
Most of the assignments on this page are explained in  [lecture notes of lecture 11](https://cs50x.mprog.nl/lectures/week-11#_some_closure).
