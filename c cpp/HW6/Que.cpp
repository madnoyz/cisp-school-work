#include <iostream>
#include <cstdlib>
using namespace std;

typedef int data;

struct node {
	data d;
	struct node *next;
};

struct node *front = 0;
struct node *rear;

void q( data );
data dq( void );
bool isEmpty( void );

int main()
{
	cout << front << endl;
	cout << &front << endl;
	cout << rear << endl;
	cout << &rear << endl;
	q('A');
	q('B');
	q('C');
	q('D');
	q('E');
	q('F');
	cout << front << endl;
	cout << &front << endl;
	cout << rear << endl;
	cout << &rear << endl;
	dq();
	while( !isEmpty() )
	{
		dq();
	}
	cout << "End front " << front << endl;
	cout << "End front addr " << &front << endl;
	cout << "End rear " << rear << endl;
	cout << "End rear addr " << &rear << endl;
	return 0;	
}

void q( data d )
{
	node *newNode = (node*)malloc(sizeof(node));
	newNode->d = d;
	newNode->next = NULL;
	rear = newNode;
	rear->next = newNode;
	if ( front == 0 )
		front = rear;
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
		temp = front;
		cout << "p pre-addr: " << p << endl;
		cout << "front->d pre-addr: " << front->d << endl;
		p = front->d;
		cout << "p post-addr: " << p << endl;
		cout << "front->d post-addr: " << front->d << endl;
		front = front->next;
		free (temp);
	}
	cout << "p end: " << p << endl;
	return p;
}

bool isEmpty( void )
{
	if( front )
	{
		return false;
	}else{

		return true;
	}
}
