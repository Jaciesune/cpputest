#include "pch.h"
#include "Sortowanie.h"

//vector<int> array = { 1, 5, 15, 97, 20, 6, 4, 16, 54 };
MergeSort m1;
vector<int> arr_check1 = {2, 5, 7, 9, 13, 18, 20};

TEST(Merge_sort_test, TestAlreadySortedArr) {
    vector<int> arr = {2, 18, 5, 9, 13, 20, 7};


    m1.sort(arr);
    EXPECT_EQ(arr, arr_check1);
}

TEST(Merge_sort_test, TestReverseSortedArr) {

}