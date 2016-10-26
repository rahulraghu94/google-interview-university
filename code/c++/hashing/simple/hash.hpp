#ifndef _HASH_IMP_
#define _HASH_IMP_

#include <iostream>
#include <string>
using namespace std;

#define MAX 10

struct hash_table{
	string value;
	string key;
};

int hash_func(string value);
void insert_value(string key, string value);
void delete_value(string key);
string search(string key);
void view();

#endif
