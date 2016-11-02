#include <iostream>
#include "bst.h"

using namespace std;

int main()
{
	struct bstnode *root = NULL;
	int key;

	root = insert(root, 15);
	root = insert(root, 10);
	root = insert(root, 25);
	root = insert(root, 25);
	root = insert(root, 8);
	root = insert(root, 12);

	cout << "Searching for key = 25: " << endl;

	if(search(root, 25)){
		cout<< "Element found!" << endl;
	} else {
		cout << "Element not found :(" << endl;
	}

	cout << "Minimum: " << find_min(root) << endl;
	cout << "Maximum: " << find_max(root) << endl;
	cout << "Height of the tree: " << find_height(root) << endl;


	cout << endl << endl << "Traversals: " << endl;
	cout << "Inorder: " << endl;
	inorder(root);
	cout << endl << "Preorder: " << endl;
	preorder(root);
	cout << endl << "Postorder: " << endl;
	postorder(root);

	return 0;
}