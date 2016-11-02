#ifndef _BINARY_SEARCH_TREE_
#define _BINARY_SEARCH_TREE_

struct bstnode {
	int key;
	struct bstnode *left;
	struct bstnode *right;
};

bstnode* insert(bstnode * root, int data);
int search(bstnode *root, int data);
bstnode* create_node(int data);
int find_min(bstnode *root);
int find_max(bstnode *root);

#endif
