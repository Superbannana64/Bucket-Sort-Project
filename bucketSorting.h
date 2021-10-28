#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int compare(const void* first, const void* second) //A function to compare two pointer numbers, needed for using qsort function
{
    int x = *((int*)first), y = *((int*)second); //Sets x and y to pointers of the two numbers being compared
    if (x == y) //If x and y are the same then there is no change 0
    {
        return 0;
    }
    else if (x < y) //If x is less than y
    {
        return -1;
    }
    else //Otherwise if x is greater then y
    {
        return 1;
    }
}

struct bucket
{
    int count;  //Counts how many numbers in the bucket
    int* value; //Values of arr[]
};

void bucketSort(int arr[], int sizeOfArray)
{
    int numOfBuckets = 3; //Number of bucket used in the sort

    struct bucket buckets[3]; //Creates 3 objects of struct buckets

    int i, j, h, high, low;
    high = 10;
    low = 0;

    for (i = 0; i < numOfBuckets; i++) //runs through and sets up each bucket's count and value before it gets filled
    {
        buckets[i].count = 0; //Makes sure count is 0 at the specific bucket

        buckets[i].value = (int*)malloc(sizeof(int) * sizeOfArray); //Creates a dynamically allocated block of memory of int* and the exact 
                                                                    //byte-size of sizeOfArray. It is created in the value of the current bucket, so 
    }

    for (i = 0; i < sizeOfArray; i++) //Runs through the array and fills up the bucket due to premade perameters. Bucket sort works better when the array
                                           //Is already known about
    {
        if (arr[i] < low) //Checks if arr[i] is lower then the low value
        {
            buckets[0].value[buckets[0].count++] = arr[i]; //Inputs the array object into the specific bucket's value while increasing count same as other three
        }
        else if (arr[i] > high) //Checks if arr[i] is higher then the high val
        {
            buckets[2].value[buckets[2].count++] = arr[i];
        }
        else
        {
            buckets[1].value[buckets[1].count++] = arr[i];
        }
    }

    for (i = 0, j = 0; i < numOfBuckets; i++) //Loops through the number of buckets
    {
        qsort(buckets[i].value, buckets[i].count, sizeof(int), &compare); //Uses quick sort to take the value, number and size of elements, and run them through a comaring
                                                                         //function so that quick sort knows how to compare.

        for (h = 0; h < buckets[i].count; h++) //Loops through a single bucket (all of the numbers in said bucket)
        {
            arr[j + h] = buckets[i].value[h]; //Takes the bucket and the values in the bucket and input them into the array. the j+k allows it to fill out the array completely as
                                              //k only goes up so far. J is the total count of buckets so far
        }

        j += buckets[i].count; //Takes the count from the specific bucket, and adds it to j, allows for the array to be filled out further then the limit of k
        free(buckets[i].value);//deleted the value pointer so HEAP doesnt get corrupted
    }
}