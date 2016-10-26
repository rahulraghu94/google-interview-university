#ifndef _HASH_IMP_
#define _HASH_IMP_

#include <iostream>
#include <string>
using namespace std;

#define MAX 10
#define DELETED "-999"

struct hash_table{
	string value;
	string key;
};

int hash_func(string value);
int double_hashing(string key, int tries);
void insert_value(string key, string value);
void delete_value(string key);
string search(string key);
struct hash_table search(int key_in_int);
void view();

#endif
