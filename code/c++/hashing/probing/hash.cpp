#include <iostream>
#include <string>
#include "hash.hpp"

using namespace std;
struct hash_table table[MAX];

/*
 * This takes a key value and returns the structure node at that position
 */
struct hash_table search(int key_in_int)
{
	return table[key_in_int];
}

/*
 * This is the arbitrary hash function that the open addressing algorithm woulf
 * use. This is a smiple division algorithm where h(k) = k mod m
 */
int hash_func(string value)
{
	int prehash = 0, i;
	for(i = 0; i < value.length(); i++){
		prehash = prehash + (int)value[i];
	}

	return prehash % MAX;
}

/*
 * This is the insert function. It makes a call to double_hashing and simply
 * inserts the value returned by the fuction
 */
void insert_value(string key, string value)
{
	int tries = 0, key_in_int ;

	while(1){
		key_in_int = double_hashing(key, tries);
		hash_table temp = search(key_in_int);
		if(temp.value != ""){
			tries++;
			cout << "Rehashing...." << endl;
		} else {
			break;
		}
	}


	table[key_in_int].key = key;
	table[key_in_int].value = value;

	return;
}

/*
 * Searching is done in two stages. First a call is made to
 * double_hashing(key, tries) which returns an index value. Next we check if
 * the index value holds the key you're searching for. If yes, success.
 * If no, continue. Then we check if the returned index holds a DELETED
 * flag. If yes, coninue. Else, success.
 */
string search(string key)
{
	int tries = 0, key_in_int ;

	while(1){
		key_in_int = double_hashing(key, tries);
		hash_table temp = search(key_in_int);
		if((temp.value == DELETED) || (temp.key != key)) {
			tries++;
		} else if (temp.key == key) {
			return table[key_in_int].value;
		} else {
			break;
		}
	}
}

/*
 * The delete function first searches for the right key, then replaces with
 * DELETE.
 */
void delete_value(string key)
{
	int tries = 0, key_in_int;

	while(1){
		key_in_int = double_hashing(key, tries);
		hash_table temp = search(key_in_int);
		if((temp.value == DELETED) || (temp.key != key)){
			tries++;
		} else if (temp.key == key){
			table[key_in_int].key = DELETED;
			table[key_in_int].value = DELETED;
			break;
		} else {
			break;
		}
	}
}

void view()
{
	cout << endl << "Viewing the table" << endl;
	for(int i = 0; i < MAX; i++){
		if((table[i].key == DELETED) || (table[i].key == "")){
			cout << "Slot " << i << ": " << endl;
		} else {
			cout << "Slot " << i << ": " << "(" << table[i].key << ", " << table[i].value << ")" << endl;
		}
	}
}

/*
int double_hashing(string key)
{
	int index, tries = 0;

	while(1){
		index = (hash_func(key) + tries*hash_func(key)) % MAX;

		if(!search(index)){
			tries ++;
		} else {
			break;
		}
	}
	return index;
}
*/

int double_hashing(string key, int tries)
{
	return (hash_func(key) + tries*hash_func(key)) % MAX;
}