#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void insertionSort(int arr[], int n)
{
	int i, t, j;
	for (i = 1; i < n; i++)
	{
		t = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > t)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = t;

        //cout << "Step " << i << " : ";
        printArray(arr, n);
	}
}

int main()
{
	int arr[] = {4, 5, 3, 9, 2, 6, 1, 10, 8, 7};
	int n = 10;

	insertionSort(arr, n);

    cout << "Sorted array : ";
	printArray(arr, n);

	return 0;
}

