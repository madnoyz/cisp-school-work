#include <stdio.h>
#include <stdlib.h>

typedef char data;

struct node {
	data d;
	struct node *next;
};

struct node *head = 0;
struct node *tail = 0;

int isEmpty( void );
void traverse( void );
void append( data );
char removeData();
int find( char );

void main()
{
	head = tail = 0;
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
	if( head )
		return 0;
	else
		return 1;
}

void traverse( void )
{
	struct node *p = head;
	
	while( p )
	{
		printf(" %s", (char)p->d );
		p = p->next;
	}
}

void append( data d ) 
{
	struct node *p = (node*)malloc( sizeof( node ) );
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

char removeData()
{
	struct node *p;
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
	struct node *c;
	struct node *pc;

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