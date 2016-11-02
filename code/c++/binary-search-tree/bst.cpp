#include <iostream>
#include <algorithm>
#include <queue>
#include <limits.h>
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

bstnode *find_min(bstnode *root)
{
	struct bstnode* cur = root;

	if(root == NULL){
		cout << "Tree is empty!" << endl;
		return 0;
	}

	while(cur->left){
		cur = cur->left;
	}

	return cur;
}

bstnode* find_max(bstnode *root)
{
	if(root == NULL){
		cout << "Tree is empty!" << endl;
		return 0;
	}

	while(root->right) {
		root = root->right;
	}

	return root;
}

int find_height(bstnode *root)
{
	if(root == NULL)
		return -1;

	return max(find_height(root->left), find_height(root->right)) +1;
}

void inorder(bstnode *root)
{
	if(root == NULL)
		return;

	inorder(root->left);
	cout << root->key << "\t" ;
	inorder(root->right);
}

void descorder(bstnode *root)
{
	if(root == NULL)
		return;

	inorder(root->right);
	cout << root->key << "\t" ;
	inorder(root->left);
}

void preorder(bstnode *root)
{
	if(root == NULL)
		return;

	cout << root->key << "\t" ;
	preorder(root->left);
	preorder(root->right);

}

void postorder(bstnode *root)
{
	if(root == NULL)
		return;

	postorder(root->left);
	postorder(root->right);
	cout << root->key << "\t" ;

}

void levelorder(bstnode *root)
{
	queue<bstnode *> q;

	if(root == NULL)
		return;

	q.push(root);

	while(!q.empty()){
		bstnode *cur = q.front();

		cout << cur->key << "\t";

		if(cur->left)
			q.push(cur->left);

		if(cur->right)
			q.push(cur->right);

		q.pop();
 	}

 	return;
}

int is_bst_util(bstnode *node, int min, int max)
{
	if (node==NULL){
		return 1;
	}

	if (node->key < min || node->key > max) {
		return 0;
	}

	return is_bst_util(node->left, min, node->key-1) && is_bst_util(node->right, node->key+1, max);
}

int is_bst(bstnode *root)
{
	return is_bst_util(root, INT_MIN, INT_MAX);
}

bstnode* delete_value(bstnode *root, int data)
{
	if(root == NULL)
		return root;

	else if (data < root->key)
		root->left = delete_value(root->left, data);

	else if(data > root->key)
		root->right = delete_value(root->right, data);

	else {
		if(root->right == NULL && root->left == NULL){
			free(root);
			root = NULL;
		} else if(root->left = NULL) {
			bstnode *cur = root;
			root = root->right;
			free(cur);
		} else if(root->right ==NULL) {
			bstnode *cur = root;
			root = root->left;
			free(cur);
		} else {
			bstnode *cur = find_min(root->right);
			root->key = cur->key;
			root->right = delete_value(root->right, cur->key);
		}
	}

	return root;
}

void delete_tree(bstnode *root)
{
	if (root == NULL)
		return;

	delete_tree(root->left);
	delete_tree(root->right);

	cout << "Deleting... " << root->key << endl;
	free(root);
}