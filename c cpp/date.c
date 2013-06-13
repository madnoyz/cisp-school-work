#include <stdio.h>
#include <string.h>

int main( void )
{
	char *tokenPtr;
	char user_date[11];
	void *holder[4];
	int counter;

	printf("Enter a date [MM/DD/YYYY]: ");
	scanf("%s", &user_date);
	
	tokenPtr = strtok( user_date, "/");

	for( counter = 1; counter < 4; counter++ )
	{
		holder[counter] = tokenPtr;
		tokenPtr = strtok( NULL, "/");
	}
}