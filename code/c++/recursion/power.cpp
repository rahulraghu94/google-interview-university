#include <iostream>
using namespace std;

int power(int base, int exp)
{
	if(exp){
		return base * power(base, exp - 1);
	} else {
		return 1;
	}
}

int main()
{
	cout << power(2, 6) << endl;

	return 0;
}