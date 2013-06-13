#include <iostream>
#include <cstdlib>
using namespace std;

typedef char data;

struct node {
	data d;
	node *next;
};

node *head = 0;
node *tail = 0;

int isEmpty( void );
void traverse( void );
void append( data );
data removeData( void );
int find( char );

int main()
{
	append('A');
	append('B');
	append('C');
	append('D');
	append('E');
	append('F');
	removeData();
	traverse();
	cout << find('C') << " "; 
	cout << endl;
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
	if( head )
		return 0;
	else
		return 1;
}

void traverse( void )
{
	node *p = head;
	
	while( p )
	{
		cout << (char)p->d << " ";
		p = p->next;
	}
	cout << endl;
}

void append( data d ) 
{
	node * p = (node*)malloc(sizeof(node));
	p->next = 0;
	p->d = d;

	if( !head )
	{
		head = tail = p;
	} else {
		tail->next = p;
		tail = p;
	}
}

data removeData( void )
{
	node *p;
	data temp;

	if( !head )
		return -1;

	if( head == tail )
	{
		temp = head->d;
		free (head);
		head = tail = 0;
		return temp;
	}

	p = head;
	head = head->next;
	temp = p->d;
	free (p);
	return temp;
}

int find( data d )
{
	node *c;
	node *pc;

	if( !head )
		return 0;

	if( head == tail )
	{
		if( head->d == d )
		{
			free (head);
			head = tail = 0;
			return 1;
		}else{
			return 0;
		}
	}

	pc = head;
	c = head->next;

	if( pc->d == d )
	{
		head = head->next;
		free (pc);
		return 1;
	}

	while( c )
	{
		if( c->d == d )
		{
			pc->next = c->next;

			if( c == tail )
				tail = pc;

			free (c);
			return 1;
		}

		pc = c;
		c = c->next;
	}
	return 0;
}
