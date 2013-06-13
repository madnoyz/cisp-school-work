/***
*	File: InsertionSort.cpp
* 	Author: Clyde Pabro
* 	Class: Fall 2012 - CISP 430
*	HW# 0 
* 
***/

#include <iostream>
#include "InsertionSort.h"
using namespace std;

//initialize BubbleSort constructor with array
InsertionSort::InsertionSort( const int numbersArray[] )
{
	// copies the array and stores into numbers[]
	for( int num = 0; num < size; ++num ) 
	{
		numbers[ num ] = numbersArray[ num ];
	} // end for
} // end InsertionSort constructor

// function to start sorting array elements
void InsertionSort::processSort() 
{	
	int i, j; // initialize the counter
	int temp;
	
	// showcases each element of the array for sorting
	for( i = 0; i < InsertionSort::size ; i++) 
	{
		j = i; temp = numbers[i];
		
		while( numbers[j -1] > temp && j > 0 ) 
		{
			numbers[ j ] = numbers[ j -1 ];
			j--;
		} // end while
		
		numbers[j] = temp;
		printElements();
	} // end for
	
} // end function processSort()

// function to print each element of the array.
void InsertionSort::printElements() 
{
	// prints each element with a space delimiter.
	for( int numElements = 0; numElements < size; ++numElements ) 
	{
		cout << numbers[ numElements ] << " ";
	}//end for
	cout << endl;
} // end function printElements