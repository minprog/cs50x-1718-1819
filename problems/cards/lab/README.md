# Game of Cards

Object-oriented programming is commonly used to model real-world things, like cars or businesses, as well as their behaviors and interactions. Each class represents a "kind of thing" and bundles relevant functionality in the form of methods. In this lab, you'll model a deck of 52 playing cards.

![A few playing cards for illustration](card_deck.png)

{% next "Let's get started" %}

## Card: a data class

Let's create a `Card` class first. For this lab, a `Card` is very simple *data class*: it only contains a few attributes, as well as the initializer method necessary to fill those.

The attributes of a `Card` will contain the minimum of information needed to uniquely define what kind of card it is:

- the suit, or color, of the card (like Spades)
- the value of the card (2, 3, A, J, ...)

In a UML diagram, the class looks like this:

![A UML diagram of a class called Card with two attributes: one is called suit of type string, the other is called value, also of type string.](card_class.png)

**Write** a declaration for the `Card` class. In the editor to the right, add it to `cardgame.py`. Don't worry about putting something *in* the class; you'll write the class body in a minute!

{% spoiler "Syntax Help" %}
Use the following syntax:

    class ClassName:

First the `class` keyword, and then the name of your class.
{% endspoiler %}

After writing the declaration, press Next to go on.

{% next %}

## Card: initializer

Because `Card` is a data class, there are only two methods that are really needed to make it useful:

- `__init__` to set values when creating one specific object of type `Card`
- `__str__` to provide an easily readable description of the `Card` object

**First**, write an initializer that takes `suit` and `value` parameters and initializes attributes with the same name.

{% spoiler "Syntax Help" %}
Use the following syntax:

    def __init__(self, attr1, ...):
        self.attr1 = attr1

In the parameter list of the `__init__` method, you define for which attributes a value has to be provided. In the method body, you set the corresponding attributes via `self`. Note that `__init__` doesn't `return` anything! It just sets attributes.
{% endspoiler %}

{% next %}

## Card: __str__

**Second**, write a `__str__` method. It doesn't take any parameters other than `self`, and should `return` a string that properly describes the object. In this case, the returned string might look like this:

    Ace of spades

`Ace` comes from the attribute `self.value` and `spades` from `self.suit`.

{% spoiler "Syntax Help" %}
Return a formatted string like this one:

    f"hello, {s}"
{% endspoiler %}

{% next "Next: Testing" %}

## Card: testing

Let's test your class! Below the class definition (not *in* the definition), add a line of code:

    if __name__ == "__main__":

Anything that's inside this `if` will only be executed if we run the file directly from the command line using `python cardgame.py`.

In the `if`, **write** a few statements to create example `Card` objects.

{% spoiler "Syntax Help" %}
Use the following syntax:

    var1 = ClassName(...)

This assigns a new object of type `ClassName` to the variable `var1`. In the place of the `...` you should provide the required parameters for the initializer. Recall which parameters are needed?
{% endspoiler %}

And after those statements, **add** a few statements that print the objects from the variables you created.

{% spoiler "Syntax Help" %}
Use the following syntax:

    print(var1)

When used like this, `print` will automatically use the `__str__` method that you wrote to provide a human-readable description of the object contents.
{% endspoiler %}

Now try it out! In the Terminal, **run** `python cardgame.py` and verify the results.

{% next "Next: the deck" %}

## Deck: a class that contains cards

In this lab, a Deck will be a standard deck of hearts, diamonds, clubs and spades, with values Ace through King. It will have two methods: one to shuffle, and one to deal a card out of the deck:

![A UML representation of the Deck class, containing a cards attribute, which is a list of Card objects and two methods, one called shuffle and one called deal. both take no arguments.](deck_class.png)

Before writing those methods, let's declare the class and add an initializer.

**Add** a declaration for the `Deck` class to your code. Then, **add** an initializer. The initializer for this class doesn't take any arguments besides `self`, because any `Deck` will always have the same set of cards.

The initializer is a good place for default values. Let us provide you with the declarations of two important attributes for this class:

    self.suits = ['Hearts','Diamonds','Clubs','Spades']
    self.values = ['A','2','3','4','5','6','7','8','9','10','J','Q','K']

As you can see, we *hardcode* the suits and values, because in our program, these will always be the same. **Copy** those declarations into your initializer.

{% next %}

## Deck: instantiating cards

With those `suits` and `values`, there is enough information in the `Deck` class to be able to create a `Card` instance for each of 52 combinations.

**Write** code to generate all 52 `Card`s and add them to a list called `cards`. Code to do this should be added to the end of the initializer.

{% spoiler "Syntax Help" %}
Here is one suggestion for the pseudocode:

    create empty list of cards
    for each suit do
        for each value do
            create new Card with that combination
            add it to the list

The list of cards should be an attribute (using `self`), so it can be accessed in other methods!
{% endspoiler %}

It's possible to generate all cards and add them to the `cards` variable using a single line of code. However, it is no problem to use more lines! Make it work first, then optimize.

{% next %}

## Deck: testing

**Add** a `__str__` method to `Deck`:

    return f"{len(self.cards)} cards in the deck"

Now you can test the class. Go to the `if __name__ == "__main__"` section of your program and **replace** the contents with the following lines:

    deck = Deck()
    print(deck)

This creates one instance of a `Deck` and prints it. When run, your program will hopefully report that the deck contains 52 cards!

{% next %}

## Deck: shuffle

The first of our main methods for the `Deck` class is `shuffle`. It should take the list of `Card`s and shuffle it pseudorandomly.

**First**, import a useful module that comes with Python. It's called `random` and happens to provide a `shuffle` method! Add the following line at the top of your program:

    import random

**Second**, write a `shuffle` method for the `Deck` class. It should do nothing other than call `random.shuffle` with the `cards` attribute as a parameter. This will provide shuffling functionality for your class, and *delegate* that functionality to another (Python-provided) module.

{% spoiler "Syntax Help" %}
As an example, `random.shuffle` can be used to shuffle lists like this:

```python
import random
numbers = [1, 2, 3, 4, 5]
random.shuffle(numbers)
print(numbers)
[2, 3, 1, 4, 5]
```

Have a look at the [Python docs](https://docs.python.org/3/library/random.html#random.shuffle) for more information.
{% endspoiler %}

Now, with the code that you currently wrote, you can't really see if the `shuffle` method works correctly. You could test one particular property, though: after shuffling, the deck should still have 52 cards (because, unlike people, computers definitely do not lose cards during shuffling). Change your test code to shuffle the deck before printing it. Is everything still correct?

{% next %}

## Deck: dealing

Now that the deck may be shuffled, it should also be possible to draw cards from it.

**Create** a method `deal` that removes the top card from the `cards` list and `return` it. To remove means that after calling `deal`, the number of cards in `cards` will have decreased by 1.

Once again, it's possible to re-use standard Python functionality to remove one `Card` from `cards`. Take a look at the docs for [Python lists](https://docs.python.org/3/tutorial/datastructures.html) and find an appropriate method to do this. Then use that method in your own `deal` method! Don't forget to actually `return` the card that you got from the deck.

{% next %}

## Deck: testing again

In your testing code, add

    card = deck.deal()

right after creating the `Deck`. Because the deck hasn't been shuffled at that point, this card should be the King of Spades. Use `print(card)` to print the card. **Try** it out!

Now test the `shuffle` method! Call it in your testing code and verify that the shuffling is indeed pseudorandom.

{% next "Final Checkup" %}

## Final Checkup

Your classes now should look like this:

![A UML diagram comprising the Deck and Card classes as described earlier.](overview.png)

Note that some of the methods that you wrote aren't in this diagram. Usually, we keep everything that's not relevant out of the diagrams.

To determine what is relevant, we look at classes from a "user" perspective. What information do we need to use the class well? We wouldn't need to know that `Deck` has all cards in a Python list called `cards`, because `Deck` has two well-defined methods that we need to work with the deck: `shuffle` and `deal`. Everything else is *implementation detail*.

In other words, classes' data is kept private and only through their methods should their attributes be manipulated. This idea is called *encapsulation*. However, data classes like `Card` are an exception to this rule. Data classes are purposely designed to hold some basic data, just like a `struct` in C, and attributes are usually manipulated directly, not through methods.

If you're keen to check your implementation *exactly*, press Next for a UML diagram that contains all methods and attributes from an implementation perspective.

{% next %}

## Implementation diagram

This is what your classes should look like from an implementation perspective:

![A UML diagram that's augmented from the earlier diagrams. For the card class, it adds the init and str methods. For the deck class, it adds the init and str methods, as well as the cards, suits and values attributes.](overview_implementation.png)

If not quite the same, think about the differences and why you decided to do it differently. Your design might as well be better! Ask your neighbor to discuss.

You won't submit this lab. If you'd like to save the `Card` and `Deck` classes to your computer, now is the time to do so!

This was Game of Cards.
