#include <iostream>
#define MAX 2000
using namespace std;

long long matrix[MAX][MAX] = {0};

void build_coef()
{
	for (int i = 0; i < MAX; i++){
		matrix[i][0] = 1;
		matrix[i][i] = 1;
	}

	for (int i = 2; i < MAX; i++){
		for(int j = 1; j < i; j++){
			matrix[i][j] = matrix[i - 1][j - 1] + matrix[i - 1][j];
		}
	}
}

long long bin_coef(int i, int j)
{
	build_coef();
	return matrix[i][j];
}

int main()
{
	cout << bin_coef(30, 2) << endl;
	return 0;
}