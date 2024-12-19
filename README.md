Incorrect output on number of comparisons (-2)

1. (10 pts) A lottery ticket buyer purchases 10 tickets a week, always playing the same 10 5-digit "lucky" combinations.

Write a complete program that initializes an array or vector with these numbers and then prompts the player to enter this week's winning 5-digit number. The program should perform a binary search through the list of the player's numbers and report whether or not one of the tickets is a winner this week. Here are the numbers:

79422  26792  93121  77777  85647
26791  33445  62483  13579  55555
The program needs to sort the numbers (bubble sort or selection sort) first before the binary search.

Your program must keep count of the number of comparisons it makes until it finds the ticket (if any).

Your program must also implement input validation: Only accept 5-digit numbers as input.

Sample input and output (found):

Enter this week's winning 5-digit number: 111111
Invalid input. Please enter a 5-digit number: 55555

Number of comparisons: 1
One of your tickets in a winner this week! You won!
Sample input and output (not found):

Enter this week's winning 5-digit number: 111111
Invalid input. Please enter a 5-digit number: 12345

Number of comparisons: 3
None of your tickets is a winner ticket. Try again next week
