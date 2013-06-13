#include <iostream>
#include "BubbleSorting.h"
using namespace std;

//initialize BubbleSort constructor with array
BubbleSorting::BubbleSorting( const int numbersArray[] )
{
	// copies the array and stores into numbers[]
	for( int num = 0; num < size; ++num ) {
		numbers[ num ] = numbersArray[ num ];
	} // end for
} // end BubbleSort constructor

// function to start sorting array elements
void BubbleSorting::processSort() 
{	
	int i, j; // initialize the counter
	
	// showcases each element of the array for sorting
	for( i = 0; i < BubbleSorting::size; i++)
	{
		for(j = BubbleSorting::size - 1; j > 0 ; j-- )
		{
			//swaps the elements of the array
			if( numbers[j] < numbers[j-1] )
			{
				int temp = numbers[j]; 
				numbers[j] = numbers[j - 1];
				numbers[j - 1] = temp;
			} // end if
		
			printElements(); // prints out each array after sort
		} // end for
	} // end for
} // end function processSort()

// function to print each element of the array.
void BubbleSorting::printElements() 
{
	// prints each element with a space delimiter.
	for( int numElements = 0; numElements < size; ++numElements ) 
	{
		cout << numbers[ numElements ] << " ";
	}//end for
	cout << endl;
} // end function printElements