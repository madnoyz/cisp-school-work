#include <iostream>
using namespace std;

int foo1( int n );
int foo2( int n );
int foo3( int n );

int main()
{
		cout << "foo1: " << endl;
		for( int i = 0; i <= 64; i++ )
		{
				cout << i << " " << foo1(i) << endl;
		}
		
		cout << "foo2: " << endl;
		for( int i = 0; i <= 64; i++ )
		{
				cout << i << " " << foo2(i) << endl;
		}
		
		cout << "foo3: " << endl;
		for( int i = 0; i <= 64; i++ )
		{
				cout << i << " " << foo3(i) << endl;
		}
}

int foo1( int n )
{
		int counter = 0;
		
		for( int i = 0; i < n; i++ )
		{
				counter++;
		}
		
		return counter;
}

int foo2( int n )
{
		int counter = 0;
		
		for( int i = 0; i < n; i++ )
		{
			for( int j = 0; j < n; j++ )
			{
				counter++;
			}		
		}
		
		return counter;
}

int foo3( int n )
{
		int counter = 0;
		
		for( int i = n; i > 0; i = i/2 )
		{
				counter++;
		}
		
		return counter;
}
