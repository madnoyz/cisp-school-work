/***
**	Filename:	AvlTree.cpp
**	Author:		Clyde Pabro
**	Created:	10/12/2012
**	Updated:	10/18/2012
**	Description:
**				This program creates a binary search tree with node-pointer implementation.
**
***/
#include <iostream>
#include <cstdlib>
using namespace std;

// Creates the nodes for the tree.
struct node {
	struct node * left;
	struct node * right;
	int data;
};

void insert( node **, int );		// creates a node and inserts the data either left or right
void print_preorder( node * );		// prints out data in preorder
void print_postorder( node * );		// prints out data in postorder.
void print_inorder( node * );		// prints out data in order.

// begin of program
int main()
{
	struct node * root = NULL;
	
	insert( &root, 1 );
	insert( &root, 5 );
	insert( &root, 6 );
	insert( &root, 4 );
	insert( &root, 3 );
	insert( &root, 9 );
	insert( &root, 7 );
	insert( &root, 8 );
	insert( &root, 2 );

	cout << "\nPreOrder: ";
	print_preorder(root);
	cout << "\nPostOrder: ";
	print_postorder(root);
	cout << "\nInOrder: ";
	print_inorder(root);
	
	return 0;
} // end of main function

void insert( struct node** node, int data )
{
	// checks if node is created
	if ( *node != NULL )
	{
		/** checks data against previous data.
		*	decides to enter either right or
		*	left depending on value.
		**/ 
		if( data <= (*node)->data )
		{
			// inserts left if data less than previous node
			insert(&((*node)->left), data);

		} else if ( data >= (*node)->data ) {

			// inserts right if data more than previous node.
			insert(&((*node)->right), data);
		} // end if
	} else {
		// creates a new node.
		(*node) = (struct node*)malloc(sizeof(struct node));
		(*node)->data = data;
		(*node)->left = NULL;
		(*node)->right = NULL;
		return;
	}// end if
}// end insert function

// prints out data in preorder. DLR
void print_preorder( struct node * node )
{
	if( node )
	{
		cout << node->data << " ";
		print_preorder(node->left);
		print_preorder(node->right);
	}
}// end of print_preorder function

// prints out data in postorder. LRD
void print_postorder( struct node * node )
{
	if( node )
	{
		print_postorder(node->left);
		print_postorder(node->right);
		cout << node->data << " ";
	}
}// end of print_postorder function.

// prints out data in order. LDR
void print_inorder( struct node * node )
{
	if( node )
	{
		print_inorder(node->left);
		cout << node->data << " ";
		print_inorder(node->right);
	}
}// end of print_inorder function.