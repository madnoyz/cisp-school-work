#ifndef BUBBLESORTING_H
#define BUBBLESORTING_H
#include <iostream>
using namespace std;

// starts a class to bubble sort an array of numbers.
class BubbleSorting 
{
	public: 
		static const int size = 9; // constant size of array is 9
	
		BubbleSorting( const int [] ); // constructor
		
		void processSort(); // function to sort array elements.
		void printElements(); // function to print each array element.
		
	private: 
		int numbers[ size ]; // initializes an array.
}; //end class BubbleSorting


#endif