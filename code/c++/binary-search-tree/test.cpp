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
	root = insert(root, 8);
	root = insert(root, 12);

	cout << "Searching for key = 25: " << endl;

	if(search(root, 25)){
		cout<< "Element found!" << endl;
	} else {
		cout << "Element not found :(" << endl;
	}

	cout << "Minimum: " ;
	struct bstnode* temp = find_min(root);
	cout << temp->key << endl;

	cout << "Maximum: " ;
	temp = find_max(root);
	cout << temp->key << endl;

	cout << "Height of the tree: " << find_height(root) << endl;


	cout << endl << endl << "Traversals: " << endl;
	cout << "Inorder: " << endl;
	inorder(root);
	cout << endl << "Preorder: " << endl;
	preorder(root);
	cout << endl << "Postorder: " << endl;
	postorder(root);
	cout << endl << "Levelorder: " << endl;
	levelorder(root);

	cout << endl << endl << "Printing elements in orted order: " << endl;
	inorder(root);
	cout << endl << "In descending order: " << endl;
	descorder(root);

	cout << endl << endl << "Is \"root\" a BST: " ;
	if(is_bst(root)){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	cout << "Deleting value 10: " << endl;
	//delete_value(root, 10);

	cout << endl << endl << "Deleting the tree: " << endl;
	delete_tree(root);

	return 0;
}