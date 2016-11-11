#include <iostream>
using namespace std;

void subset_util(string so_far, string rest)
{
	if(rest == ""){
		cout << so_far << endl;
	} else {
		subset_util(so_far + rest[0], rest.substr(1));
		subset_util(so_far, rest.substr(1));
	}
}

void permute_util(string so_far, string rest)
{
	if(rest == ""){
		cout << so_far << endl;
	} else {
		for (int i = 0; i < (int)rest.length(); i ++){
			string next_string = so_far + rest[i];
			string remaining = rest.substr(0, i) + rest.substr(i+1);

			permute_util(next_string, remaining);
		}
	}
}

void subset(string str)
{
	subset_util("", str);
}

void permute(string str)
{
	permute_util("", str);
}

int main()
{
	string to_permute = "KDHFKJHDFKGHKJDHFGUHEKJFHJKHKJHKDFJGHKJDFSHGKJDFHG";
	string to_subsetify = "a";

	//cout << "Permutations are: " << endl;
	permute(to_permute);

	//cout << endl << "Subset elements are: " << endl;
	//subset(to_subsetify);

	return 1;
}