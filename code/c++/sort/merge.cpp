#include <iostream>
#define MAX 100

using namespace std;

void merge(int *arr, int size1, int size2) 
{
        int temp[size1+size2];
        int ptr1=0, ptr2=0;

        while (ptr1+ptr2 < size1+size2) {
                if (ptr1 < size1 && arr[ptr1] <= arr[size1+ptr2] || ptr1 < size1 && ptr2 >= size2)
                        temp[ptr1+ptr2] = arr[ptr1++];

                if (ptr2 < size2 && arr[size1+ptr2] < arr[ptr1] || ptr2 < size2 && ptr1 >= size1)
                        temp[ptr1+ptr2] = arr[size1+ptr2++];
        }

        for (int i=0; i < size1+size2; i++)
                arr[i] = temp[i];
}

void mergeSort(int *arr, int size) 
{
        if (size == 1)
                return;  

        int size1 = size/2, size2 = size-size1;
        mergeSort(arr, size1);
        mergeSort(arr+size1, size2);
        merge(arr, size1, size2);
}

int main() 
{
        int a[MAX];
        for (int i = MAX; i > 0; i--) {
                a[i] = i + 23;
        }

        mergeSort(a, MAX);

        cout << endl;
        for (int i = 0; i < MAX; i++)
                cout << a[i] << " ";

        cout << endl;

        return 0;
}