/***
*	File: MainInsert.cpp
* 	Author: Clyde Pabro
* 	Date: August 31, 2012
* 	Class: Fall 2012 - CISP 430 
* 	Location: Folsom Lake College
* 	Description: 
* 		This program performs a insertion sort with a hard coded array. 
* 
***/
#include "InsertionSort.h" //include definition of class InsertionSort.

// begins program execution.
int main() 
{
	// hard coded array with integers
	int numbersArray[ InsertionSort::size ] = { 24, 13, 26, 1, 2, 27, 38, 15, 10 };
	
	InsertionSort mySort(numbersArray); // create a InsertionSort object
	cout << "Original: ";
	mySort.printElements(); // prints out the original array.
	mySort.processSort(); // sorts array
	cout << "Sorted: ";
	mySort.printElements(); // prints out the final array element after sorting.
	cout << endl;
	return 0; // returns to errors.
} // end main
