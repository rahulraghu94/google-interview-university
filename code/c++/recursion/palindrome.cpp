#include <iostream>
#include <string>

using namespace std;

bool better_palindrome(string str)
{
	if (str.length() <= 1){
		return true;
	} else {
		return str[0] == str[str.length() - 1] && better_palindrome(str.substr(1, str.length() - 2));
	}
}

int palindrome(string str, int start, int end)
{
	if ((end - start) < 2){
		return 1;
	} else if (str[start] != str[end]){
		return 0;
	} else {
		return palindrome(str, start + 1, end - 1);
	}
}

int main()
{
	string str = "abba";

	if (palindrome(str, 0, str.size() - 1)){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	if(better_palindrome(str)){
		cout << "YES" << endl;
	} else{
		cout << "NO" << endl;
	}

	return 0;
}