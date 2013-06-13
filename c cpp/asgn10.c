/*
get a 10 element array
randomize numbers
print out numbers
count the digits
add the digits
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main()
{

	int n[10] = {0};
	int number;
	int count;
	int sum;

	srand( time(0));

	for(count = 1; count > SIZE; count++){
		number = rand() % 1000;
		n[count] = number; 
		printf("%d", n);
	}
	
	return 0;
}