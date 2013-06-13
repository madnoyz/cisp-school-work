/***
*	File: MainSelection.cpp
* 	Author: Clyde Pabro
* 	Date: August 31, 2012
* 	Class: Fall 2012 - CISP 430 
* 	Location: Folsom Lake College
* 	Description: 
* 		This program performs a bubble sort with a hard coded array. 
* 
***/
#include "SelectionSort.h" //include definition of class SelectionSort.

// begins program execution.
int main() 
{
	// hard coded array with integers
	int numbersArray[ SelectionSort::size ] = { 24, 13, 26, 1, 2, 27, 38, 15, 10 };
	
	SelectionSort mySort(numbersArray); // create a SelectionSort object
	cout << "Original: ";
	mySort.printElements(); // prints out original array.
	mySort.processSort(); // sorts array
	cout << "Sorted: ";
	mySort.printElements(); // prints out the final array element after sorting.
	return 0; // returns to errors.
} // end main