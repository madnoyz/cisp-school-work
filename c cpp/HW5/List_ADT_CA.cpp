#include <iostream>
#include <cstdlib>
#define SIZE 4
using namespace std;

typedef int data;

data myList[SIZE];
int head, tail, used, temp;

int isEmpty( void );
void append( data d );
void traverse( void );
data removeData( void );
int find( data d );

int main()
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
	cout << find('C') << endl;
	traverse();
	while( !isEmpty() )
	{
		cout << removeData() << " ";
	}
	cout << endl;
	return 0;
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
		myList[ 0 ] = d;
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

	if( isEmpty() == 0 )
	{
		cout << "Empty" << endl;
		return;
	}

	if( used == 1 )
	{
		cout << myList[ head ] << " " << endl;
		return;
	}

	p = head;
	do
	{
		cout << myList[p] << " ";
		p = ( p + 1 ) % SIZE;
	}while( p != ( tail + 1 ) % SIZE );
	cout << endl;
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

	if( isEmpty() == 0 )
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
	}while( p != (tail + 1) % SIZE );
}
