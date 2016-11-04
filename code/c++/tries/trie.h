#ifndef _TRIES_
#define _TRIES_

#define ARRAY_SIZE(a) sizeof(a)/sizeof(a[0])
#define ALPHABET_SIZE (26)
#define CHAR_TO_INDEX(c) ((int)c - (int)'a')

struct TrieNode
{
    struct TrieNode *children[ALPHABET_SIZE];
    bool isLeaf;
};

struct TrieNode *getNode(void);
void insert(struct TrieNode *root, const char *key);
bool search(struct TrieNode *root, const char *key);

#endif