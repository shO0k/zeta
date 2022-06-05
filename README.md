# zeta
======================================================
 ____      __         ____              __  _
/_  / ___ / /____ _  / __/_ _____  ____/ /_(_)__  ___
 / /_/ -_) __/ _ `/ / _// // / _ \/ __/ __/ / _ \/ _ \
/___/\__/\__/\_,_/ /_/  \_,_/_//_/\__/\__/_/\___/_//_/

======================================================

Purpose: This is designed to be a simple little assignment to get the juices flowing
in your brain. It requires knowledge of functions, loops, and maaaaaaybe vectors,
but more importantly it will teach you how to *composite* them together. Using
multiple building blocks of computer science in concert is a skill in and of
itself and needs to be built up through practice.

Background: I was up at Shaver Lake visiting some friends from college, and
while my kid played with their kid in the snow, we talked about computer
science at UCSD, and we each described our hardest classes. Katrina mentioned
that she once took a number theory class on Zeta Functions, and to this day still
doesn't know what they mean. So I looked them up, and then I looked up the
meaning of the words being used to describe Zeta functions, and I don't get
them either. (https://encyclopediaofmath.org/wiki/Zeta-function) BUT! There
was one part of it I did understand, and that's where this assignment came from.

Your assignment is to code this little thing here: https://imgur.com/1D5XDIa

Explanation: pi(x) is a function that has nothing to do with pi (why? because
MATH, that's why) but rather is a function meaning "The number of prime
numbers <= x". So pi(7) = 4, since there are four prime numbers <= 7, namely:
2, 3, 5, and 7. (1 is not a prime number!)

The big sigma is the summation symbol. It means add up the results
for pi(x) from x = i to x = j. So if we sum up all pi(x) from x = 7 to 11, we
are computing: pi(7) + pi(8) + pi(9) + pi(10) + pi(11)

Now pi(7) through pi(10) are all the same, right? Since the next prime number
is 11. So all of those are 4. And then pi(11) is 5, since there's now five
prime numbers <= 11: 2, 3, 5, 7, 11.

So the answer is: 4 + 4 + 4 + 4 + 5 = 21. (Your code will output: "The answer
is: 21")

What does this mean? What is it used for? I have no idea. But it is a great
programming exercise! You can check your results of the pi(x) function for
powers of 10 (only) using the table found here:
https://en.wikipedia.org/wiki/Prime-counting_function#Table_of_%CF%80(x),_x_/_log_x,_and_li(x)

How should you do it? How should you break this problem down?

You figure it out! That's the point of this exercise.

You should be able to write a function to tell if something is prime, right?
I'd start with that and then work your way up from there. There's probably
loops or something too. And maybe pi(x) should be a function, too.

Once you have it working, you might notice it running very slowly for larger
numbers as you constantly recompute if a number if a prime or not. To combat
that, I would optimize the code so that you never repeat a computation to see
if a number is prime. You can also use the wikipedia link above to get some of
the values of π(x) precalculated for you.

If an error occurs, you must print "BAD INPUT!" and quit the program.
Errors occur if these constraints are violated:
i and j must both be >= 2
j must be >= i

If the difference between i and j is <= 10 then print out each value of pi(x).

==========================================================

Example 1:
Welcome to Zeta World!
We will compute the sum of all pi(x) from x = i to j
Please enter i:
3
Please enter j:
8
pi(3) = 2
pi(4) = 2
pi(5) = 3
pi(6) = 3
pi(7) = 4
pi(8) = 4
The answer is: 18

==========================================================

Example 2:
Welcome to Zeta World!
We will compute the sum of all pi(x) from x = i to j
Please enter i:
10
Please enter j:
20
pi(10) = 4
pi(11) = 5
pi(12) = 5
pi(13) = 6
pi(14) = 6
pi(15) = 6
pi(16) = 6
pi(17) = 7
pi(18) = 7
pi(19) = 8
pi(20) = 8
The answer is: 68

==========================================================
