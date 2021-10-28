#include "bucketSort.h"

int main()
{

	int intArray1[15] = { -10, -5, 4, 8, -3, 0, 20, 15, -12, 32, 10, 8, 21, 24, -6 };

	int n = 15;

	cout << "\nInt Array unsorted non randomized:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << intArray1[i] << ", ";
	}
	bucketSort(intArray1, n);
	cout << "\nInt Array sort non randomized:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << intArray1[i] << ", ";
	}
}