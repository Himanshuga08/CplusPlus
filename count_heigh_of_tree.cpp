
#include <iostream>
#include <math.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	Node(int k)
	{
		data = k;
		left = right = NULL;
	}
};


int minimumDepth(Node *root, int level)
{



 



















	if (root == NULL)
		return level;
	level++;

	return min(minimumDepth(root->left, level),
			   minimumDepth(root->right, level));
}


int main()
{

	
	Node *root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);

	cout << minimumDepth(root, 0);
	return 0;
}


