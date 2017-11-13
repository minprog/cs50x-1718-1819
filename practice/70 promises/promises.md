# Promises, Promises

## Goal

Learn to use jQuery-promises. When we build websites we often want to request data (e.g., from other a database or another website or service). When we're loading this data we want to make sure that the website stays usable. Ajax, and more sepcifically jQuery promises, allow us to do this. Here you learn how to do this. You will start with a badly programmed website (i.e., it blocks while waiting for data) and you're going to fix it!

## Background

Check out this video on Javascript:
![embed](https://www.youtube.com/embed/Z93IaNfavZw)

Check out this video on Ajax (sorry, no football):
![embed](https://www.youtube.com/embed/dQcBs4S-wEQ)

Further reading, the Ajax API:
[http://learn.jquery.com/ajax/jquery-ajax-methods/](http://learn.jquery.com/ajax/jquery-ajax-methods/)


## Getting started

    cd ~/workspace/practice/
    wget https://cs50x.mprog.nl/course/practice/70%20promises/promises.zip
    unzip promises.zip
    rm promises.zip
    cd ~/workspace/practice/promises

## Exercise
The framework you've downloaded contains a very minimal setup for a website: A webserver (`application.py`), an plain html webpage (`index.html` in the directory `templates`), some Javascript (`scripts.js` in the directory `static`).

The file `application.py` is prety simple. You don't have to edit it, but let's have a quick look. It starts a webserver with three routes: 

- `"/"`, returns the `index.html` template.
- `"/slow"`, returns a JSON with some mock data. It is programmed to wait for 3 seconds before it returns the data. Hence, "slow".
- `"/fast"`, also returns a JSON with some mock data. But, it is slightly faster, it only takes 1 second to return the data.

The file `index.html` is a very basic website template. This file you don't have to edit either.

- It includes the `jQuery` library.
- It imports our own `scripts.js`.
- It contains two buttons, 'slow' and 'fast'. When they are clicked they respectively call the functions `slow()` and `fast()` from our `script.js` (more on that later).
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

*The problem is* that if you press 'Slow' the website will be blocked for three seconds. If you press 'Fast' immidiately after 'Slow' it will not appear until fast is done. Your task si to fix this.

### Step 2:

Change the functions `slow()` and `fast()` to use `$.getJSON()` instead of `loadData()`. The principle of `getJSON` is not very complicated, but the syntax might seem a bit overwelming at first.

The idea is that `getJSON` does not wait until the data is returned. After calling `getJSON`, the function sends an 'httprequest' to the server, after which it will immediately return, and the Javascript continues to run the rest of your code.

But how does `getJSON` know what to do with the data? For this you have to provide it with a **callback** function. This is a function that `getJSON` **promises** to execute as soon as the data is loaded.

Have a good look at the documentation provided atop this exercise to understand how this works. Pay special attention to the `.done` function.

### Step 3:

Test: Refresh the webpage and look if buttons now work correctly. Try pressing the 'Slow' button and imediatly after the 'Fast' button. If you implemented the functions `slow()` and `fast()` correctly you should see the text "This route is fast." appear well before "This route is slow.".

> You can implement callback functions as a named function or an anonymous lambda function. What is the difference? Which did you use? 