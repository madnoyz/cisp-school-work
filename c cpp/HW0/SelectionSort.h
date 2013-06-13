/***
*	File: SelectionSort.h
* 	Author: Clyde Pabro
* 	Class: Fall 2012 - CISP 430
*	HW# 0 
* 
***/
#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H
#include <iostream>
using namespace std;

// starts a class to perform a selection sort for an array of numbers.
class SelectionSort 
{
	public: 
		static const int size = 9; // constant size of array is 9
	
		SelectionSort( const int [] ); // constructor
		
		void processSort(); // function to sort array elements.
		void printElements(); // function to print each array element.
		
	private: 
		int numbers[ size ]; // initializes an array.
}; //end class SelectionSort
#endif