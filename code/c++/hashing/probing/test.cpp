#include <iostream>
#include <string>
#include "hash.hpp"

using namespace std;

int main()
{
	string key, value;
	char opt = 'y';
	int ch;

	while(opt == 'y'){
		cout << "1. Insert" << endl << "2. Delete" << endl << "3. Search" << endl << "4. View" << endl << endl;

		cin >> ch;

		switch(ch){
			case 1:
			cout << "Enter Key: " << endl;
			cin >> key;
			cout << "Enter Value: " << endl;
			cin >> value;

			insert_value(key, value);
			break;

			case 2:
			cout << "Enter Key to delete: " << endl;
			cin >> key;
			delete_value(key);
			break;

			case 3:
			cout << "Enter key to search for: " << endl;
			cin >> key;
			cout << "Key found to hold: " << search(key) << endl;
			break;

			case 4:
			view();
			break;

			default:
			return 0;
		}
	}

	return 0;
}