/**
#include <stdio.h>
#include <stdlib.h>
#define SIZE 4
typedef int data;

data myList[SIZE];
int head, tail, used, temp;

int isEmpty( void );
void append( data d );
void traverse( void );
data removeData( void );
int find( data d );

void main()
{
	head = tail = used = 0;
	append('A');
	append('B');
	append('C');
	append('D');
	append('E');
	append('F');
	removeData();
	traverse();
	printf("%d\n", find('C'));
	traverse();
	while( !isEmpty() )
	{
		printf("%d", removeData());
	}
	printf("\n");
	system("Pause");
}

int isEmpty( void )
{
	if( used )
		return 1;
	else
		return 0;
}

void append( data d )
{
	if( !used )
	{
		myList[0] = d;
		used++;
		return;
	}

	tail = ( tail + 1 ) % SIZE;
	myList[ tail ] = d;
	used++;
}

void traverse( void )
{
	data p;

	if( !used )
	{
		printf(" ");
		return;
	}

	if( used == 1 )
	{
		printf( "%d", myList[ head ] );
		return;
	}

	p = head;
	do
	{
		printf( "%d", myList[p] );
		p = ( p + 1 ) % SIZE;
	}while( p != ( tail + 1 ) % SIZE );
}

data removeData( void )
{
	if( isEmpty() )
		return -1;

	if( used == 1 )
	{
		used = 0;
		return myList[ head ];
	}

	temp = myList[ head ];
	head = ( head + 1 ) % SIZE;
	used--;
	return temp;
}

int find( data d )
{
	int p;

	if( isEmpty() )
		return 0;

	if( used == 1 )
	{
		if( myList[ head ] == d )
		{
			used = 0;
			return 1;
		}else{
			return 0;
		}
	}

	p = head;
	do
	{
		if( myList[ p ] == d )
		{
			while( p != tail )
			{
				myList[ p ] = myList[ ( p + 1 ) % SIZE ];
				p = ( p + 1 ) % SIZE;
			}

			tail--;
			if( tail < 0 )
				tail = SIZE - 1;
			
			used--;
			return 1;
		}
		p = ( p + 1 ) % SIZE;
	}while( p != (tail + 1) % SIZE );
}
**/