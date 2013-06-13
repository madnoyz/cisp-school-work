#include <stdio.h>
#include <limits.h>

int fibonacci(int num);
int largestFibonacci(int largenumber);

int main(int num, int largenumber)
{
	int oldnum;

	printf("What Fibonacci number do you want? ");
	scanf("%d", &num);

	oldnum = num;

	printf("The %d", oldnum);
	printf("th fibonacci number is: %d", fibonacci(num));
/*
	printf("\nThe largest fibonacci number that can be calculated on this system is: %d", largestFibonacci(largenumber));
*/
	return 0;
}

int fibonacci(int num)
{
	unsigned int i;
	unsigned int oldfibonacci = 0;
	unsigned int newfibonacci = 0;
	unsigned int sum = 1;
	
	for(i=2; i < num; i++)
	{
		oldfibonacci = newfibonacci;
		newfibonacci = sum;	
		sum = newfibonacci + oldfibonacci;
	}

	if(num == 1)
	{
		sum = 0;
	}

	num = sum;
	
	return num;
}

	unsigned int oldfibonacci = 0;
	unsigned int newfibonacci = 0;
	unsigned int sum = 1;

int largestFibonacci(int largenumber)
{

	do{
	oldfibonacci = newfibonacci;
	newfibonacci = sum;	
	sum = newfibonacci + oldfibonacci;
	largestFibonacci(sum);
	}while(sum < INT_MAX);	

	largenumber = sum;

	return largenumber;
} 