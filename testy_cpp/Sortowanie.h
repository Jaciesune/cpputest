#pragma once

#include <iostream>
#include <vector>

using namespace std;

#ifndef MERGE_SORT_H
    #define MERGE_SORT_H

class MergeSort
{
public:
    // Public method to perform merge sort on the input array
    static void sort(vector<int>& array)
    {
        mergeSort(array, 0, array.size() - 1);
    }

    // Public method to print the elements of an array
    static void printArray(const vector<int>& array)
    {
        for (int num : array) {
            cout << num << " ";
        }
        cout << endl;
    }

private:
    // Private method to perform the merge sort algorithm
    static void mergeSort(vector<int>& array, int left, int right)
    {
        if (left < right) {
            int middle = left + (right - left) / 2;

            mergeSort(array, left, middle);
            mergeSort(array, middle + 1, right);

            merge(array, left, middle, right);
        }
    }

    // Private method to merge two sorted halves of an array
    static void merge(vector<int>& array, int left, int middle, int right)
    {
        int n1 = middle - left + 1;
        int n2 = right - middle;

        vector<int> L(n1), R(n2);

        for (int i = 0; i < n1; i++)
            L[i] = array[left + i];
        for (int j = 0; j < n2; j++)
            R[j] = array[middle + 1 + j];

        int i = 0;
        int j = 0;
        int k = left;

        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                array[k] = L[i];
                i++;
            } else {
                array[k] = R[j];
                j++;
            }
            k++;
        }

        while (i < n1) {
            array[k] = L[i];
            i++;
            k++;
        }

        while (j < n2) {
            array[k] = R[j];
            j++;
            k++;
        }
    }
};

#endif // MERGE_SORT_H