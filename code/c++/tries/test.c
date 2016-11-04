#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "trie.h"

int main()
{
        char keys[][8] = {"the", "a", "there", "answer", "any",
        "by", "bye", "their"};
        char output[][32] = {"Not present in trie", "Present in trie"};

        struct TrieNode *root = getNode();

        int i;
        for (i = 0; i < ARRAY_SIZE(keys); i++)
                insert(root, keys[i]);

        printf("%s --- %s\n", "the", output[search(root, "the")] );
        printf("%s --- %s\n", "these", output[search(root, "these")] );
        printf("%s --- %s\n", "their", output[search(root, "their")] );
        printf("%s --- %s\n", "thaw", output[search(root, "thaw")] );

        return 0;
}