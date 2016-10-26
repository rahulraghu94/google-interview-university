#include <iostream>
#include <string>
#include "hash.hpp"

using namespace std;
struct hash_table table[MAX];

int hash_func(string value)
{
	int prehash = 0, i;
	for(i = 0; i < value.length(); i++){
		prehash = prehash + (int)value[i];
	}

	return prehash % MAX;
}

void insert_value(string key, string value)
{
	int key_in_int = hash_func(key);

	table[key_in_int].key = key;
	table[key_in_int].value = value;

	return;
}

string search(string key)
{
	int key_in_int = hash_func(key);

	return table[key_in_int].value;
}

void delete_value(string key)
{
	int key_in_int = hash_func(key);

	table[key_in_int].key = "";
	table[key_in_int].value = "";

	return;
}

void view()
{
	cout << endl << "Viewing the table" << endl;
	for(int i = 0; i < MAX; i++){
		cout << "Key: " << table[i].key << "\t Value: " << table[i].value << endl;
	}
}