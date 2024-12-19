/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

//searches for tickit that matches winner tickit
int binarysearch (const int [], int, int, int& );

//function to sort tickits from least to greatest
void selectionSort (int [],int);

const int TICKETS = 10;
int main()
{

//array for the 10 tickits
	int ticketNums[TICKETS] = {79422, 26792, 93121, 77777, 85647,26791, 33445, 62483, 13579, 55555};

	int winnerTicket;
	int comparisons = 0;

	cout<< "Enter this week's winning 5-digit number: "<<endl;
	cin >> winnerTicket;
//validates input
	while (winnerTicket < 1000 || winnerTicket >100000)
	{
		cout <<"Invalid input. Please enter a 5-digit number" <<endl;
		cin >>winnerTicket;
	}

//sorts tickets from least to greatest
	selectionSort(ticketNums,TICKETS);
//finds matching tickits and uses reference variable to count the amount of comparisons
	if (binarysearch(ticketNums,TICKETS, winnerTicket, comparisons))
	{
		cout <<"One of your tickets in a winner this week! You won"<<endl;
		cout << "Number of comparisons:"<< comparisons;
	}
	else
	{
		cout <<"None of your tickets is a winner ticket. Try again next week."<<endl;
	}




	return 0;
}
// function to search for a winner
int binarysearch(const int array[], int numElements,int value, int& comp)
{
	int first = 0,  //first array element 
	    last = numElements - 1, //last array element 
	    middle, //middle point to search 
	    position = -1;//position to search 

	bool found = false;


	while (!found && first <= last )
	{
		middle = (first + last )/2;//calculate midpoint 
		if (array[middle] == value )//if value is found at midpoint 
		{
			found = true;
			position = middle;
			found = true;
		}
		else if (array[middle] > value )//if value is in lower half 
		{
			last = middle - 1;
			comp++;
		}
		else  // if value is in upper half
		{	first = middle + 1;
			comp++;
		}

	}
	return found;
}

//function to sort from least to greatest 
void selectionSort (int array[], int size)
{
	int minIndex, minValue;

	for (int start = 0 ; start < (size - 1); start++ )
	{
		minIndex = start;
		minValue = array[start];
		for (int index = start + 1 ; index < size ; index++)
		{
			if (array [index] < minValue)
			{
				minValue = array[index];
				minIndex = index;
			}
		}
		swap (array[minIndex], array[start]);
	}
}

