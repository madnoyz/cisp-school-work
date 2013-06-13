#include <stdio.h>
#include <limits.h>

long fibonacci(long num);
void largefibonacci( void );

int main(long num)
{
	long result;

	printf("What Fibonacci number do you want? ");
	scanf("%ld", &num);

	result = fibonacci(num);

	printf("The %ldth Fibonacci number is %ld \n", num, result);

	largefibonacci();	

	return 0;
}

long fibonacci(long num)
{
	long oldfibonacci = 0;
	long newfibonacci = 0;
	long sum = 1;
	long counter;	

	if(num == 0 || num == 1)
	{
		return num = 0;
	}else{
		for( counter = (num - 2); counter >= 1; counter--)
		{
			oldfibonacci = newfibonacci;
			newfibonacci = sum;
			sum = oldfibonacci + newfibonacci;	
		}
	}

	num = sum;

	return num;
}

void largefibonacci( void )
{
	unsigned long int oldfibonacci = 0;
	unsigned long int newfibonacci = 0;
	unsigned long int sum = 1;
	unsigned long int counter;	

	for( counter = ULONG_MAX ; counter > 1; counter--)
	{
		oldfibonacci = newfibonacci;
		newfibonacci = sum;
		sum = oldfibonacci + newfibonacci;
	}
	
	if( sum <= 0)
	{
		printf("I am unable to print out the largest number.");
	}else{
	
		printf("The largest fibonacci number is: %lu", sum);
	
	}
}