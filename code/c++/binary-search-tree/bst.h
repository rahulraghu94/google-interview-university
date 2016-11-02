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

/*
 * Height of a node: Length of longest path from that node (if the node is the
 * root, the height of the tree) is the longest path from that node to a leaf
 * node.
 *
 * Depth of a node: The distance from root node to that node.
 */
int find_height(bstnode *root);

#endif
