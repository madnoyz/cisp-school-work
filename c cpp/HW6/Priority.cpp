#include <iostream>
#include <cstdlib>
using namespace std;

typedef int data;

struct node {
	data d;
	struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;

void insert( data );
data dq( void );
data peek( void );
bool isEmpty( void );

int main()
{
	insert('A');
	insert('B');
	insert('C');
	insert('D');
	insert('E');
	insert('F');
	dq();
	cout << peek() << endl;
	while( !isEmpty() )
	{
		cout << dq() << " ";
	}
	cout << "\n" << peek() << endl;
	return 0;
}

void insert( data d )
{
	data count;
	node *c;
	node *pc;
	struct node *p = (node*)malloc(sizeof(node));
	
	if( !p )
		return;
	
	p->d = d;
	p = head;

	if ( head )
	{
		p->next = c;
		head = p;
	} else {
	
		while(( c != NULL ) && ( count < d - 1 ))
		{
			count++;
			pc = c;
			c = c->next;
		}

		if( p == NULL )
		{
			pc->next = p;
			p->next = NULL;
		} else {
			pc->next= p ;
			p->next = c;
		}
	}

}

data dq( void )
{
	data p = 0;
	struct node *temp;
	if( isEmpty() )
	{
		cout << "\nQueue is empty!" << endl;
		return 0;
	} else {
		temp = head;
		cout << "p pre-addr: " << p << endl;
		cout << "head->d pre-addr: " << head->d << endl;
		p = head->d;
		cout << "p post-addr: " << p << endl;
		cout << "head->d post-addr: " << head->d << endl;
		head = head->next;
		free (temp);
	}
	cout << "p end: " << p << endl;
	return p;
}

data peek( void )
{
	if( isEmpty() )
		return 0;
	
	return head->next->d;
}

bool isEmpty( void )
{
	if( head )
		return false;
	else
		return true;
}
