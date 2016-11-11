#include <iostream>
using namespace std;

int n_choose_k(int n, int k)
{
	if(k == 0 || k == n){
		return 1;
	} else {
		return n_choose_k(n - 1, k) + n_choose_k(n - 1, k - 1);
	}

}

int main()
{
	int n = 60, k = 4;

	cout << n_choose_k(60, 4) << endl;

	return 1;
}