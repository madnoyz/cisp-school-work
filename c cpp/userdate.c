#include <stdio.h>
#include <string.h>

int main( void )
{
	const char *monthsArray[13] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	char *tokenPtr;
	char user_date[11];
	void *holder[4];
	int counter = 1;
	int number;

	printf("Enter a date [MM/DD/YYYY]: ");
	fgets( user_date, 11, stdin);

	tokenPtr = strtok( user_date, "/");
	
	while( tokenPtr != NULL ){
		holder[counter] = tokenPtr;
		tokenPtr = strtok( NULL, "/");
		++counter;
	}

	number = (atoi( holder[1] )-1);
	printf( "%s %s, %s", monthsArray[number], holder[2], holder[3]);
}