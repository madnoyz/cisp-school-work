#include <iostream>
#include <cstdlib>
using namespace std;

typedef int data;

struct node{
	data d;
	struct node *next;
}; 

node *head = 0;
node *tail = 0;

void push ( data );
data pop( void );
data peek( void );
bool isEmpty( void );

int main( void )
{
	push('A');
	push('B');
	push('C');
	push('D');
	push('E');
	push('F');
	pop();
	cout << peek() << endl;
	while( !isEmpty() )
	{
		cout << pop() << " ";
	}
	cout << "\n" << peek() << endl;
	return 0;
}

void push ( data d )
{
	node *temp = (node*)malloc(sizeof(node));
	temp->d = d;
	temp->next = head;
	head = temp;
}
 
data pop( void )
{
	data d;
	node *temp;
	if( isEmpty() )
		return 0;
	temp = head;
	head = head->next;
	d = temp->d;
	free (temp);
	return d;
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
