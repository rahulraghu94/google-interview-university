#include <iostream>
#include "bst.h"

using namespace std;

bstnode* create_node(int data)
{
	struct bstnode *newnode = (struct bstnode *)malloc(sizeof(struct bstnode));
	newnode->key= data;
	newnode->left = NULL;
	newnode->right = NULL;

	return newnode;
}

bstnode* insert(bstnode * root, int data)
{
	if(root == NULL){
		root = create_node(data);
		return root;
	} else if (data <= root->key){
		root->left = insert(root->left, data);
	} else {
		root->right = insert(root->right, data);
	}

	return root;
}

int search(bstnode *root, int key)
{
	if(root == NULL){
		return 0;
	} else if (root->key == key){
		return 1;
	} else if (root->key < key){
		return search(root->right, key);
	} else {
		return search(root->left, key);
	}
}