# Styles

## Refresher

You probably could do with a little refresher on what HTML & CSS are all about, so check out this video first!

![embed](https://www.youtube.com/embed/dM5V1epAbSs)

## Getting started

Execute in a terminal window

    mkdir -p ~/workspace/practice/styles
    cd ~/workspace/practice/styles/
    wget https://cs50x.mprog.nl/course/practice/60%20css/favourites.html
    wget https://cs50x.mprog.nl/course/practice/60%20css/styles.css

## Write HTML

Open up `favourites.html` in a browser window (either Chrome or FireFox). As you may see, the page seems empty. Now open up the same file but in your text editor. Not as empty as it seems! Whenever you've made a change to `favourites.html`, hit F5 (to refresh the page) in your browser to see the changes. Let's do some exercises!

#### 1.1

We're creating a page about your favourite animal. You may pick your own, or- if you cannot decide on any- pick mine, a giraffe. Make a title on the page saying the name of your favourite animal.

Give this title the class `name`.

#### 1.2

Now add a paragraph containing some information on your animal (e.g. the first paragraph of the wikipedia page on your animal, or just a small sentence description).

#### 1.3

Add a section (remember how?) to hold your paragraph.

#### 1.4

Add another section, and place a nice picture of your animal. Tip: to get an image link from an online image, hit right-click and choose 'Copy image adress'. You can resize an image by specifying its height and width.

Make sure you can identify both sections since you now have two of them.

#### 1.5

In the same section, make sure your picture has a title.

#### 1.6

Duplicate your file by right-clicking `duplicate` in your file tree. We will make use of `favourites1.html` soon!

## Add CSS styles to the HTML

Now we're going to add some style rules to the HTML. Remember, if you have a `div` element, you might add styles to it as follows:

    <div style="display: none;"></div>

#### 1.7

We continue to work in our original file. Now add some colours! Change the text of the page title to orange, the text of the picture title to green, and the _background_ of the description to yellow.

#### 1.8

Center align the description text.

#### 1.9

Change the font of *all* titles to Arial.

## Move the styles to a separate file

![embed](https://www.youtube.com/embed/G9mq8-DLVAg)

Open up your duplicated file `favourites1.html` and uncomment line 4. As you load this document in your browser, you notice no styles are applied. Opening up `styles.css`, that seems about right, since the css file we linked to is empty!

Now implement *all* style changes we made in html (in exercise 1) in CSS.
