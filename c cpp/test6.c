#include <stdio.h>
#define SIZE 10

int main( void )
{
	int a[ SIZE ] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 
	int pass;
	int i;
	int hold;

	printf("Data items in original order\n");

	for( i=0; i<SIZE; pass++)
	{
		printf("%4d", a[i] );
	}
	
	
	
	return 0;
}