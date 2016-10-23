/* C++ code demonstrating vectors.
 * Using c++ standard Templte Libraries.
 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int i =0;

	vector <int> vec;

	for (i = 0; i < 10; i++)
		vec.push_back(i);

	cout << "Size after pushing 10 elements: " << vec.size() << endl;

	for (i = 10; i > 5; i--){
		vec.pop_back();
	}

	cout << "Size after popping 5 elements: " << vec.size() << endl;

	auto iterator = vec.begin();
	vec.insert(iterator, 11, 10);

	cout << "Size after inserting element to 11 position: " << vec.size() << endl;

	cout << "After inserting element to 11th position" << endl;
	for (i = 0; i < vec.size(); i++){
		cout << vec[i] << "->" ;
	}
	cout << endl;

	return 0;
}