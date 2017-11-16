# Promises, Promises

## Goal

Learn to use jQuery-promises. When we build websites we often want to request data (e.g., from a database or another website or service). When we're loading this data we want to make sure that the website stays usable. Ajax, and more sepcifically jQuery's promises, allow us to do this. Here you will learn how. You will start with a badly programmed website (i.e., it blocks while waiting for data) and you're going to fix it!

## Background

Check out this video on Javascript:
![embed](https://www.youtube.com/embed/Z93IaNfavZw)

Check out this video on Ajax:
![embed](https://www.youtube.com/embed/dQcBs4S-wEQ)

Further reading, the Ajax API:
[http://learn.jquery.com/ajax/jquery-ajax-methods/](http://learn.jquery.com/ajax/jquery-ajax-methods/)


## Getting started

    cd ~/workspace/practice/
    wget https://cs50x.mprog.nl/course/practice/70%20promises/promises.zip
    unzip promises.zip
    rm promises.zip
    cd ~/workspace/practice/promises

## Exercise 1

The framework you've downloaded contains a very minimal setup for a website: A webserver (`application.py`), a plain HTML webpage (`index.html` in the directory `templates`), and some Javascript (`scripts.js` in the directory `static`).

The file `application.py` is prety simple. You don't have to edit it, but let's have a quick look. It starts a webserver with four routes: 

- `"/"`, renders the `index.html` template.
- `"/slow"`, returns a JSON with some mock data. It is programmed to wait for 3 seconds before it returns the data. Hence, "slow".
- `"/fast"`, also returns a JSON with some mock data. But, it is a bit faster, it only takes 1 second to return the data.
- `"/unreliable"`, is, well, unreliable. About 50% of the time, the route promptly returns with a correct JSON, the other 50% of the time, the route returns an error. For the fisrt part of the exercise we're going to ignor this route.

The file `index.html` is a very basic website template. This file you don't have to edit either.

- It includes the `jQuery` library.
- It imports our own `scripts.js`.
- It contains two buttons, 'slow' and 'fast'. When clicked they respectively call the functions `slow()` and `fast()` from our `script.js` (more on that later).
- Further, it contains two `<p>` elements with the id's `data1` and `data2` into which we will load our data from the Javascript.

The purpose of the file `scripts.js` is to load data from our server and put them in the `index.html`. This is the file where you have to make some changes.

- The function `slow()` reads data from a route called `"/slow"`, which takes 3 seconds to return data.
- The function `fast()` reads data from a route called `"/fast"`, which takes 1 second to return data.
- The function `loadData()` is a badly programmed function that does the actual loading of the data. It request the data from the provided route. It is not a great function because it blocks the Javascript while it is waiting for the data (i.e., 3 seconds for the `"/slow"` route).

Your goals is to improve the functions `slow()` and `fast()`. Instead of using the **synchronous** `loadData()`, you're going to use the **asynchronous** jQuery function `$.getJSON()`.

### TL;DR

You only have to revise the implementation of the functions `slow()` and `fast()` in `scripts.js`

### Step 1:

Start the webserver by typing the command (make sure you're in the `promises` directory):

	flask run 

In the CS50 Ide load the webpage by clicking `CS50 IDE > Web Server`.

If all is well, you should now see a webpage with a header ('Promises, Promises'), two buttons ('Slow' and 'Fast'), and some text.
When you press the button 'Slow' you will see (after 3 seconds) the text "This route is slow." appear on the website. When you press the button 'Fast' you will see the text "This route is fast." appear. 

*The problem is* that if you press 'Slow' the website will be blocked for three seconds. If you press 'Fast' immidiately after 'Slow' it will not appear until the loading of 'slow' is done. Your task is to fix this.

### Step 2:

Change the functions `slow()` and `fast()` to use `$.getJSON()` instead of `loadData()`. The principle of `getJSON` is not very complicated, but the syntax might seem a bit overwelming at first.

The idea is that `getJSON` does not wait until the data is returned. After calling `getJSON`, the function sends an **HTTP request** to the server, after which it will immediately return, and the Javascript continues to run the rest of your code.

But how does `getJSON` know what to do with the data? For this you have to provide it with a **callback** function. This is a function that `getJSON` **promises** to execute as soon as the data is loaded.

Have a good look at the documentation provided atop this exercise to understand how this works. Pay special attention to the `.done` function.

### Step 3:

Test: Refresh the webpage and look if buttons now work correctly. Try pressing the 'Slow' button and imediatly after the 'Fast' button. If you implemented the functions `slow()` and `fast()` correctly you should see the text "This route is fast." appear well before "This route is slow.".

> You can implement callback functions as a named function or an anonymous lambda function. What is the difference? Which did you use? 

## Exercise 2

Until now we assumed that a route always returns a JSON file. This, however, is not alway the case. An HTTP request can also return an error.

Remember that `application.py` had a fourth route named `unreliable`. About 50% of the time, this route returns with a correct JSON. The other 50% of the time, the route returns an error. It is now your task to deal with this.

### Step 1

Create third event handler function (like `slow()` and `fast()`), called `unreliable()`. Don't implement the function completely yet. We just want to have it in place for later. For now, just let it log the text "TODO: implement!" to the console everytime the function is called.  

### Step 2

Create a third button, that calls the function `unreliable()` on a click event.

> Reload your webpage and test the button. Does it show up? What happens when you click on it? Do you see something appearing in the console?

### Step 3

Create a new `<p>` element in `index.html` with `id="data3"`.

### Step 4

Everything is in place now, to implement the actual functionality of `unreliable()`. The function should send an HTTP request for the route `"/unreliable"`. The route can return either a valid JSON or an error. You should write a handler for both cases.

- If the route comes up with a valid JSON it should write the data to the `<p id="data3">` element like you did in the previous example. 
- If, on the other hand the route returns an error, you should write the text "Sorry, something went wrong!" to the element `<p id="data3">`

If you're not sure where to start, have another look at the documentation of jQuery: [http://api.jquery.com/jquery.ajax/](http://api.jquery.com/jquery.ajax/). Pay special attention to the functions `.done` and `.fail` later in the documentation.

> Background question: For the current example we created an artifical example of a route that returns errors. What would some real life reasons be for a HTTP request that fails? 