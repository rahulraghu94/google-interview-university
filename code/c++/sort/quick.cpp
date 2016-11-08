#include <iostream>
#include <array>

#define MAX_VAL 10

using namespace std;


int partition(int a[], int l, int r) 
{
       int pivot, i, j, t;

       pivot = a[l];
       i = l; j = r+1;

       while( 1) {
              do ++i; while( a[i] <= pivot && i <= r );
              do --j; while( a[j] > pivot );
              if( i >= j ) break;
              t = a[i]; a[i] = a[j]; a[j] = t;
      }

      t = a[l]; 
      a[l] = a[j]; 
      a[j] = t;
      
      return j;
}

void quickSort(int a[], int l, int r)
{
       int j;
       cout << "IN SORT" << endl;

       if( l < r ) {
              j = partition( a, l, r);
              quickSort( a, l, j-1);
              quickSort( a, j+1, r);
      }

}

int main() 
{
        int a[] = { 7, 12, 1, -2, 0, 15, 4, 11, 9, 128937};
	int i;
	
        cout << "Unsorted array is:  " << endl;
	for(i = 0; i < MAX_VAL; ++i)
		cout << a[i] << "\t";

        cout <<  endl << endl;

	quickSort( a, 0, 8);

	cout << "Sorted array is:  " << endl;;
	for(i = 0; i < MAX_VAL; ++i)
		cout << a[i] << "\t";

        cout << endl;

        return 0;
}