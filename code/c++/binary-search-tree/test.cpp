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

	cout << "Search Key: " << endl;
	cin >> key;

	if(search(root, key)){
		cout<< "Element found!" << endl;
	} else {
		cout << "Element not found :(" << endl;
	}

	return 0;
}