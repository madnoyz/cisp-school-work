/***
*	File: SelectionSort.cpp
* 	Author: Clyde Pabro
* 	Class: Fall 2012 - CISP 430
*	HW# 0 
* 
***/
#include <iostream>
#include "SelectionSort.h"
using namespace std;

//initialize SelectionSort constructor with array
SelectionSort::SelectionSort( const int numbersArray[] )
{
	// copies the array and stores into numbers[]
	for( int num = 0; num < size; ++num ) {
		numbers[ num ] = numbersArray[ num ];
	} // end for
} // end SelectionSort constructor

// function to start sorting array elements
void SelectionSort::processSort() 
{
	int i, j; // initialize the counter
	int temp, m; // initialize the variable holder
	
	// performs the selection sort
	// finds the largest number in the array
	i = SelectionSort::size - 1;
	while( i >= 0) 
		{
		j = 0;
		m = 0;
		
		// positions the largest number to
		// be moved
		while( j <= i ) {
			if( numbers[j] > numbers[m] ) {
				m = j;
			}
			j++;
		} // end while
		
		// swaps position of the largest number to the
		// next position of the sorted array
		temp = numbers[i];
		numbers[i] = numbers[m]; 
		numbers[m] = temp;
		printElements();
		i--;
	} // end while
	
} // end function processSort()

// function to print each element of the array.
void SelectionSort::printElements() 
{
	// prints each element with a space delimiter.
	for( int numElements = 0; numElements < size; numElements++ ) 
	{
		cout << numbers[ numElements ] << " ";
	}//end for
	cout << endl;
} // end function printElements