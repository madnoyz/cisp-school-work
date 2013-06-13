#include <stdio.h>
#define ROLL_AMOUNT 36000
#define FREQUENCY_SIZE 13

int rollDice(void);

int main(void)
{
	int count;
	double percentage;
		
	int frequency[ FREQUENCY_SIZE ] = { 0 };
	
	srand(time(NULL));
	
	for( count = 0; count < ROLL_AMOUNT ; count++ )
	{
		++frequency[ rollDice() ];
	}

	printf("%s%17s%17s\n", "Roll", "Frequency", "Percentage");

	for( count = 2; count < FREQUENCY_SIZE; count++ )
	{
		percentage = frequency[ count ];
		printf("%4d%17d%17.2f%%\n", count, frequency[ count ], 10*(percentage/3600));
	}


	return 0;
}

int rollDice(void)
{
	int dice1;
	int dice2;
	int diceSum;

	dice1 = 1 + ( rand() %6 );
	dice2 = 1 + ( rand() %6 );
	diceSum = dice1 + dice2;

	return diceSum;
}