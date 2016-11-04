#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "trie.h"

struct TrieNode *getNode(void)
{
        struct TrieNode *pNode = NULL;

        pNode = (struct TrieNode *)malloc(sizeof(struct TrieNode));

        if (pNode){
                int i;

                pNode->isLeaf = false;

                for (i = 0; i < (int)ALPHABET_SIZE; i++)
                        pNode->children[i] = NULL;
        }

        return pNode;
}


void insert(struct TrieNode *root, const char *key)
{
        int level;
        int length = strlen(key);
        int index;

        struct TrieNode *pCrawl = root;

        for (level = 0; level < length; level++) {
                index = CHAR_TO_INDEX(key[level]);
                if (!pCrawl->children[index])
                        pCrawl->children[index] = getNode();

                pCrawl = pCrawl->children[index];
        }

        pCrawl->isLeaf = true;
}

bool search(struct TrieNode *root, const char *key)
{
        int level;
        int length = strlen(key);
        int index;
        struct TrieNode *pCrawl = root;

        for (level = 0; level < length; level++) {
                index = CHAR_TO_INDEX(key[level]);

                if (!pCrawl->children[index])
                        return false;

                pCrawl = pCrawl->children[index];
        }

        return (pCrawl != NULL && pCrawl->isLeaf);
}