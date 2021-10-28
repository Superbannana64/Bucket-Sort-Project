#include "bucketSort.h" //For the bucketSort and rest of include statements
#include <chrono>  // for microseconds

using namespace std::chrono;

int main()
{

	int intArray1[15] = { -10, -2, 4, 8, -3, 0, 10, 15, -2, -7, 16, 8, 11, 14, -6 }; //Non randomized array which the bucket sort accounts for the range of

	int n = 15;

	cout << "\nSmall Int Array unsorted non randomized small range:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << intArray1[i] << ", ";
	}

	auto start = duration_cast<microseconds>(system_clock::now().time_since_epoch()).count();
	bucketSort(intArray1, n);
	auto end = duration_cast<microseconds>(system_clock::now().time_since_epoch()).count();

	long long bucketSortNonRandomizedSmallTime = end - start;

	cout << "\nSmall Int Array sort non randomized small range:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << intArray1[i] << ", ";
	}
	cout << "\nTime spent: " << bucketSortNonRandomizedSmallTime << "Microseconds" << endl;

	int intArray2[15] = {}; //Random array which the range is not entirely know, it goes from -10 -> 20
	n = 15;
	for (int i = 0; i < n; i++)
	{
		int number = rand() % 30 + -10;
		intArray2[i] = number;
	}

	cout << "\nSmall Int Array unsorted randomized small range:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << intArray2[i] << ", ";
	}

	start = duration_cast<microseconds>(system_clock::now().time_since_epoch()).count();
	bucketSort(intArray2, n);
	end = duration_cast<microseconds>(system_clock::now().time_since_epoch()).count();

	cout << "\nSmall Int Array sort randomized small range:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << intArray2[i] << ", ";
	}

	long long bucketSortRandomizedSmallTime = end - start;

	cout << "\nTime spent: " << bucketSortRandomizedSmallTime << " Microseconds" << endl;

	int intArray3[50] = {}; //Large int array which we know the range of values and bucket sort accounts for it.
	n = 50;
	for (int i = 0; i < n; i++)
	{
		int number = rand() % 36 + -10;
		intArray3[i] = number;
	}
	cout << "\nLarge Int Array unsorted randomized small range:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << intArray3[i] << ", ";
	}

	start = duration_cast<microseconds>(system_clock::now().time_since_epoch()).count();
	bucketSort(intArray3, n);
	end = duration_cast<microseconds>(system_clock::now().time_since_epoch()).count();

	cout << "\nLarge Int Array sorted randomized small range:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << intArray3[i] << ", ";
	}

	long long bucketSortLargeRandomizedSmallTime = end - start;

	cout << "\nTime spent: " << bucketSortLargeRandomizedSmallTime << " Microseconds" << endl;

	int intArray4[50] = {}; //Large int array where the bucket sort range does not account for the array's range
	n = 50;
	for (int i = 0; i < n; i++)
	{
		int number = rand() % 101 + -50;
		intArray4[i] = number;
	}

	cout << "\nLarge Int Array unsorted randomized large range:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << intArray4[i] << ", ";
	}

	start = duration_cast<microseconds>(system_clock::now().time_since_epoch()).count();
	bucketSort(intArray4, n);
	end = duration_cast<microseconds>(system_clock::now().time_since_epoch()).count();

	cout << "\nLarge Int Array sorted randomized large range:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << intArray4[i] << ", ";
	}

	long long bucketSortLargeRandomizedLargeTime = end - start;

	cout << "\nTime spent: " << bucketSortLargeRandomizedLargeTime << " Microseconds" << endl;
}