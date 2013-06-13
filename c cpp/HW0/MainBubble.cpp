/***
*	File: MainBubble.cpp
* 	Author: Clyde Pabro
* 	Date: August 31, 2012
* 	Class: Fall 2012 - CISP 430 
* 	Location: Folsom Lake College
* 	Description: 
* 		This program performs a bubble sort with a hard coded array. 
* 
***/
#include "BubbleSorting.h" //include definition of class BubbleSorting.

// begins program execution.
int main() 
{
	// hard coded array with integers
	int numbersArray[ BubbleSorting::size ] = { 24, 13, 26, 1, 2, 27, 38, 15, 10 };
	
	BubbleSorting mySort(numbersArray); // create a BubbleSorting object
	cout << "Original: ";
	mySort.printElements(); // prints out the original array.
	mySort.processSort(); // sorts array
	cout << "Sorted: ";
	mySort.printElements(); // prints out the final array element after sorting.
	cout << endl;
	return 0; // returns to errors.
} // end main
