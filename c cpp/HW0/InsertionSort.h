/***
*	File: InsertionSort.h
* 	Author: Clyde Pabro
* 	Class: Fall 2012 - CISP 430
*	HW# 0 
* 
***/

#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H
#include <iostream>
using namespace std;

// starts a class to bubble sort an array of numbers.
class InsertionSort 
{
	public: 
		static const int size = 9; // constant size of array is 9
	
		InsertionSort( const int [] ); // constructor
		
		void processSort(); // function to sort array elements.
		void printElements(); // function to print each array element.
		
	private: 
		int numbers[ size ]; // initializes an array.
}; //end class InsertionSort
#endif