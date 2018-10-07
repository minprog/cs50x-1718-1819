# Game of Cards

Object-oriented programming is commonly used to model real-world things, like cars or businesses, as well as their behaviors and interactions. Each class represents a "kind of thing" and bundles relevant functionality in the form of methods. In this lab, you'll model a deck of 52 playing cards.

<img src="https://raw.githubusercontent.com/Qvdpost/GameOfCards/master/Lab/card_deck.png" style="padding: 10px">

{% next "Let's get started" %}

## Cards

Let's create a `Card` class first. For this lab, a `Card` is very simple *Data Class*. It only contains a few properties and the methods necessary to fill those.

In this case, the fields will be bare minimum needed to define what kind of card it is:

- the suit, or color, of the card (like Spades :spades:)
- the value of the card (2, 3, A, J, ...)

In UML it should look like this:

![a class called Card with two fields: one is called suit of type string, the other is called value, also of type string](card_class.png)

Now, write a declaration for the `Card` class in `cardgame.py`.

{% spoiler "Syntax Help" %}
Use the following syntax:

    class ClassName(object):

This includes the keyword `class`, the name of your class, as well as the parent class, which is usually `object`.
{% endspoiler %}

The class is not complete yet, so let's do that next.

{% next %}

A Card is represented by its suit and value, as can be seen from the `__init__`, these values can be anything however. So a deck of apples and strawberries could also be made using this same Card class.
Our Deck uses the traditional suits (Hearts, Diamonds, Clubs and Spades) and values (Ace through King).

All these properties are defined within the `__init__` method, often times this is the very first method you'll define for your class.

To start out, let's create a deck. Add `deck = Deck()` to the `if __name__ == "__main__"` statement at the bottom of the file and run the script via `python cardgame.py` in the terminal.
If everything went well, you'll be notified that a deck object was successfully created. However, the deck has no card yet!

{% next "Continue: Methods" %}

## Methods

Now let's get started with the methods. Firstly there's the `__init__`, it is called the constructor. When you create an object, the `__init__` is used to set it up with the correct values. As you can see, we've already supplied it with suits and values, but not the actual card objects yet.
To initialize the cards we're going to use a method. Let's call it `initialize_cards(self)`. Adding a method is like declaring a function, only at an indented level under the class it belongs to. The function can usually only be called by the class it is attached to.

Before getting into the actual code, it is advised to write a docstring for your method.
A docstring is a comment between two lines of three quotation marks, each class already has a docstring for example (the `__init__`s do not! Note where the docstring is placed). Keeping your comments up to date and relevant will pay off greatly down the line.

Now it's time to fill the deck with cards. Once again you'll have to create an object, but this time it needs arguments. Take a look at Card's `__init__`, it expects a self, suit and value. Python 'automagically' supplies self as an argument, so only suit and value have to be passed by us.
To iteratively create all the cards we'll use a nested for loop. For each suit in the list of suits we'll create a card for each value in the list of values. Then the created card is appended to a list which can later be returned. It would look like this:
```python
cards = []
for suit in self.suits:
  for value in self.values:
    card = Card(suit, value)
    cards.append(card)
```
Make sure to `return` the list of created cards. Then change `self.cards = []` into `self.cards = self.initialize_cards()`.
As you can see we need to prefix 'self' before properties and methods inherent to our class. Also, we can call methods and functions within the `__init__`! Only call on the ones needed for initialization though, don't implement your entire program here.

Add the following print statement to the `if __name__ == "__main__"` statement, right below creating the deck object: `print(f"There are {len(deck.cards)} cards in the deck.")`.
Rerun the script with `python cardgame.py`, This time you should also see that 52 cards have been put in the deck. This time however the deck is stacked, or rather it is unshuffled!

{% next "Continue: Shuffling" %}

## Shuffling

One of the core features of a deck is shuffling the cards around. A stacked deck is only its starting state. Now you might have already noticed the import statement at the top of `cardgame.py`. As the name of the imported function suggests, it can be used to shuffle! It is never a bad idea to read up on the documentation of a function, method or class that you're importing into your project, for shuffle's documentation see: https://docs.python.org/3/library/random.html#random.shuffle. But for now, you can trust that shuflle can be used to shuffle lists as follows:
```python
numbers = [1, 2, 3, 4, 5]
shuffle(numbers)
print(numbers)
[2, 3, 1, 4, 5]
```
Use it to shuffle the deck's `self.cards` in a newly declared method called `shuffle(self)`.
Yes, you can actually call the method shuffle, because it can only be called by prefixing either the class-name or the object-name. Thus it does not conflict with the already existing name of the imported shuffle function.

{% next "Continue: Drawing cards" %}

## Dealing

Now that the deck is shuffled, it's time to draw cards from the deck. In OOP it is common to only let classes/objects directly change their properties. In other words, their data is kept private and only through their callable methods can their properties be manipulated. This concept is called encapsulation. In our case it means that the list of cards within the deck object is managed by the deck itself.
So instead taking cards directly from the deck, we'll let the deck 'deal' them to us.

Once again create a method, this time call it `deal(self)`, that removes the top card in the self.cards list and `return`s that card. Consider cards to be stacked from first to last card as bottom to top card. Thus `deal` will have to remove the last card in the self.cards list.

Python itself already implemented a useful method within their list class, called `pop()`. Documentation can be found at https://docs.python.org/3/tutorial/datastructures.html. Use this method in your `deal(self)` method, and don't forget to actually `return` the card!

Notice how an object can be passed around and used much like any other variable can? Python actually has everything wrapped in classes. Every integer and string you've used in Python has always been an object.

{% next "Continue: Printing cards" %}

## Printing

To test if shuffling the cards works as we hope it would, we're going to see what card is on top before and after shuffling. Before shuffling we expect to see the King of Spades and after shuffling we expect.. well any card really.

First let's add `card = deck.deal()` to the `if __name__ == "__main__"`, right under the creation of the deck. This should be our King of Spades, so let's check by printing. Use `print(card)` to print the card object given back by the deck's deal method.
Hmmm that's not very helpful is it? It printed something like "<__main__.Card object at 0x7f2fbb828128>", at least it should. If it didn't, retrace your steps to see what went wrong before continuing.
If your terminal output does look alike, let me explain what we're seeing. First we have the "__main__.Card object" which tells us we printed an instance (object) of type Card originating from our main file. Secondly the "at 0x7f2fbb828128" tells us where that object was allocated in memory. So, was this the King of Spades then?
To check, instead of printing the object, we could try and print its properties.
Below your earlier print statement add `print(f"{card.value} of {card.suit}")` and execute the script once more. This should print "K of Spades", it being the last card created by our initialization method.

Having to construct strings for every object each time you're printing them is rather arduous though. Preferably we want to be able to use `print(card)`. To this end, we'll have to overwrite one of python's built in methods for the Card class. It's called the `__str__(self)` method. This method is called on by the print function and always returns a string. Add it to the Card class and have it `return` the f-string we used in the print statement earlier.
Now execute the script once more and both print statements should produce the same result. If so, remove the redundant print statement, else retrace and check for mistakes.

Now test the shuffle method! Insert it just above `card = deck.deal()` and wrap the deal and print statements in a for loop like this:
```python
for i in range(5):
  card = deck.deal()
  print(card)
```
This should print 5 different playing cards in no particular order. If they are ordered, first rerun the script a couple of times. The chance of drawing a straight flush from a shuffled deck multiple times in a row is astronomically low. If you get dealt the same 5 cards multiple times, retrace and fix your mistake!

{% next "Continue: Printing lists" %}

## Printing a list of objects

Naturally you would expect printing the deck would be much the same, but there's a small caveat. Try printing the deck.cards list by adding `print(deck.cards)` to the `if __name__ == "__main__"`. See how we end up with those memory locations again?

What happens is, when printing a list the re declared `__str__` method isn't called, instead the `__repr__` method is called. But before you go rewriting that method, let me first tell you that you shouldn't actually be printing lists like that in the first place. When printing a list, you should be unpacking each element and print them individually. Much like printing arrays in C, printing a list in Python is done iteratively. Add the following to the bottom of the `if __name__ == "__main__"` statement in cardgame.py:
```python
for card in deck.cards:
  print(card)
```
Now you can see how your deck is shuffled, remember the final card in the list is the top card of the deck!

{% next "Continue: Final Remarks" %}

## Closing Statement

These are the basics of working with objects in Python. You should now have a firmer grasp on how to define classes and what parts of your program should have its data contained within a class.

Use your understanding of these concepts to tackle your next exercise; implementing one of the earliest video games, "Adventure"!

Below you'll find an example of what your code could (or should) look like by the end of the exercise.

{% next "Solution" %}
