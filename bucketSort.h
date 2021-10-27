#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
void bucketSort(T arr[], int arraySize) //Needs an array and number of buckets
{
    int bucketSize = 0;
    int arrayIndex = 0;
    vector<T> buckets; //Create the buckets as a vector
    buckets.reserve(arraySize); //Changes how much space the vector buckets has available

    for (int i = 0; i < arraySize; i++) //Loops through the array and inserts them into the bucket vector.
    {
        buckets.push_back(arr[i]);  //Inserts arr[i] into buckets
    }

    for (int i = 0; i < arraySize; i++) //Run through array size, to sort the buckets
    {
        sort(buckets.begin(), buckets.end()); //Sorts what is inside each bucket
    }

    for (int i = 0; i < arraySize; i++)//run through array size, to  bring buckets back into arr[]
    {
        arr[i] = *(buckets.begin());//Puts first bucket into the array at the index (starts at 0)
        buckets.erase(buckets.begin()); //Deletes the bucket which was just used
    }
}