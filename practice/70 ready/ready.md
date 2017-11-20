# Ready

## Goal

Get a bit more familiar with using anonymous functions and get some Javascript practice while you're at it. Untill now you've always learned that functions (much like people) always have a name by which you call them. This, however turns out to not always be necessary. Some programming languages allow (under very specific circumstances) to define anonymous functions.

## Background

Before your start you might want to have another look at the DOM structure:
![embed](https://www.youtube.com/embed/LKWJpgvfH3U)

And if you're not comfortable with the basics of Javascript, you might want to have a look at this video:
![embed](https://www.youtube.com/embed/Z93IaNfavZw)

## Getting started

Ready?

Create a new directory `ready` in `practice` and step into it:

	mkdir ~/workspace/practice/ready
	cd ~/workspace/practice/ready

### Create file

Create a new file in `ready` called `ready.html` and copy the following HTML code into it:

	<html>
	    <head>
	    </head>
	        <body>
	            <h1>ready</h1>
	            <div id = "star"></div>
	        </body>
	        <script>
	            document.getElementById("star").innerHTML = "Star Lord!";
	        </script>
	</html>

This code creates a webpage with two elements: a `<h1>` element with the title ("ready") and an empty `<div>` with the `id` `"star"`.

Below the 'body' of the webpage you will see a small Javascript that looks for an element with the `id` `"star"` (i.e, the `<div>`) and plugs the text "Star Lord!" into it.

### Preview

Open the webpage: right-click the file `ready.html` in the filebrowser and click 'preview'. The file should open in a browser window within the CS50 IDE. In the upper right-hand corner you will see a 'pop out' button (it says 'Pop Out') when you hover over it. Click it. Your webpage will open in a seperate browser tab. 
	
We will use this 'preview' tab for the next exercises. Every time you changed the code of `ready.html` simply refresh this tab and you will see the results of your efforts.

> Open the DOM inspector of your browser to inspect the file. Look at the HTML structure. Can you find the place where the Javascript inserted the text "Star Lord!"?

## Exercise 1

We're going to start by modernising the Javascript a bit. The current webpage is what a webpage might have looked like in the late nineties. But modern Javascript uses many libraries to make things simpler. One such library is jQuery. It is provides functions to manipulate the DOM more easily. 

With jQuery, the line `document.getElementById("star").innerHTML = "Star Lord!";` can be written much more sussinctly.

### Step 1

Have another look at the jQuery documentation. Specifically how you select objects in your DOM by id ([https://api.jquery.com/id-selector/](https://api.jquery.com/id-selector/)) and how you change it's inner HTML ([http://api.jquery.com/html/](http://api.jquery.com/html/)).

> This documentation also contains information that you don't need to know, such as changing the css properties of elements and finding objects by its class. Part of the challenge of reading through documentation is to figure out which parts are important for you at this moment.

> What does the '#' prefix indicate in the jQuery selector?

### Step 2

Add the jQuery library by adding the line `<script src="https://code.jquery.com/jquery-latest.min.js"></script>` to the 'head' of the webpage (i.e., between `<head>` and `</head>`).

### Step 3

Use the either the `jQuery` function or `$` operator (they are equivalent) to find the element with `id` `"star"`. And use the `.html()` function to enter the text `"Star Lord"` into it.

### Step 4

Test: Refresh the webpage in the preview tab and see if it still shows the text "Star Lord!"

> When you look at the webpage with the DOM inspector, does the structure still look the same?

## Exercise 2

The reason that the script is put below the rest of the HTML, is because we can only run the Javascript after the `<div>` with `id` `"star"` is created. If we would add the script atop the file, it would run the script on an empty webpage. 

However we would like to move as much of the script to the top of the file. How can we do that? One approach is to create a function called `lord` atop the file, but only **call** that function once the page is loaded. 

### Step 1

Create a script section atop the file: In the 'head', under the line where you import jQuery, add the opening and closing `script` tags like so:

	<script>

	</script>

### Step 2

Within those tags define a function called `lord()`. That sets the inner HTML of the `<div>` `"star"` to "Star Lord!". If you're not sure how to define a function in Javascript, have a look at the documentation: [https://www.w3schools.com/js/js_functions.asp](https://www.w3schools.com/js/js_functions.asp)

### Step 3

Now you still have to call the function `lord()` you just created. Call this function some place after the creation of the `"star"` `<div>`. Remember that if you want to execute some Javascript, you have to place it within a `<script>` element.

### Step 4

Test: Refresh the webpage in the preview tab and see if it still shows the text "Star Lord!"

> Use the DOM inspector to have a detailed look at the structure of the webpage.

## Exercise 3

As programmers we're always looking to seperate scripts and HTML as much as possible. We have moved the bulk of the Javascript to the head of the file, so that is good. But, there's still this pesky small script below the HTML, that calls the function `lord()`. Idealy we would like to call this function from the head of the file as well, but we can only call it once the entire document is loaded.

> Why can we only call the function `lord()` once the document is loaded?

jQuery provides us with a usefull mechanism for that: the `$(document).ready()` function. Have a look at the documentation for this function [https://api.jquery.com/ready/](https://api.jquery.com/ready/).

The `$(document).ready()` will take a function as an argument and call it **after** the entire document is loaded.

### Step 1

Remove the script below the HTML and instead use `$(document).ready()` inside the script atop the page to call the function lord.

### Step 2

Test.

## Exercise 4

If you followed the steps above, the `$(document).ready()` is now used to call the **named** function `lord()`. However, in Javascript it is common practice to use **anonymous** functions.

Change your code in such a way that `$(document).ready()` uses an anonymous function instead of the named function `lord()`.

## Exercise 5

The function `$(document).ready()` is so frequently used in Javascript that there is a convenient shorthand for it: `$()`. Change your script to use that instead.

Test if it still works.

## Exercise 6

As mentioned before, as programmers we prefer separating code from the HTML. We've already done quite a good job at that by moving all the Javascript atop the file, but we would like to go one step further by moving all the Javascript to a separate file.

### Step 1

Create a new file in the `ready` folder called `scripts.js` and copy paste your script into that file. Make sure to only copy the Javascript into that file without any HTML tags (so no `<script>` and `</script>` either).

### Step 2

In your `ready.html` edit remove the Javascript.

### Step 3

Now we have to point the `ready.html` to your new Javascript file. We can do this by adding the line `<script src="scripts.js"></script>` to the file.

### Step 4

Test.

> Look at the DOM inspector. If all is well, you should now see a DOM tree without any Javascripts in it.

## Exercise 7

Until now we've changed the code without actually changing the functionality of the webpage. Now we're finally going to add some functionality to it. Let's make some code that will react to mouse clicks.

Write a script that will **add** a `<p>Star Lord</p>` element to the `"star"` `<div>` every time we click the word "Ready".

### Step 1

We need to register click events on the "Ready" text. In order to do that we need to be able to indentify it first. Add the `id = "ready-title"` to the `<h1>Ready</h1>` element.

### Step 2

In your `scripts.js`, add a listener for click events on the `"ready-title"` id. Have a look at the jQuery documentation for this [https://api.jquery.com/click/](https://api.jquery.com/click/). The listener takes a **callback** function, that is called once the text "Ready" is clicked. Remember that Javascripts lets you use an anonymous function for this.

### Step 3

In the callback function append the element `<p>Star Lord</p>` to the `"star"` `<div>`. Have a look here: [http://api.jquery.com/append/](http://api.jquery.com/append/).

## Done

All done! Congratulations! Now you have a proper understanding of some of the most central mechanisms in Javascript: callback functions, anonymous functions, DOM manipulation, and the jQuery operator.

If you have time to spare, feel free to play around a bit more with this. For example, can you make the text "Star Lord" disapear again, by clicking it?