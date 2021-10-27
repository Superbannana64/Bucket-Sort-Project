#include "bucketSort.h"

int main()
{
	float floatArray[10] = { 0.3, 0.6, 0.2, 0.7, 0.2, 1.0, 0.5, 0.0, 0.7, 0.4};

	int n = sizeof(floatArray) / sizeof(floatArray[0]);

	cout << "Float Array unsorted:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << floatArray[i] << ", ";
	}

	bucketSort(floatArray, n);

	cout << "\nFloat Array sort:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << floatArray[i] << ", ";
	}

	int intArray[10] = {3, 5, 1, 7, 0, 4, 9, 3, 10, 8 };

	n = sizeof(intArray) / sizeof(intArray[0]);
	cout << "\nInt Array unsorted:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << intArray[i] << ", ";
	}
	bucketSort(intArray, n);
	cout << "\nInt Array sort:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << intArray[i] << ", ";
	}

	string stringArray[10] = { "hi", "hello", "red", "help", "man", "jerry", "timmy", "gerald", "stack", "queue" };

	n = sizeof(stringArray) / sizeof(stringArray[0]);
	cout << "\nInt Array unsorted:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << stringArray[i] << ", ";
	}
	bucketSort(stringArray, n);
	cout << "\nInt Array sort:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << stringArray[i] << ", ";
	}
}