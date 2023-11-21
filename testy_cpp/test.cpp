#include "pch.h"
#include "Sortowanie.h"

//vector<int> array = { 1, 5, 15, 97, 20, 6, 4, 16, 54 };
MergeSort m1;
vector<int> arr_check = {2, 5, 7, 9, 13, 18, 20};
vector<int> arr_check2 = {-20, -18, -13, -9, -7, -5, -2};
vector<int> arr = {};

TEST(Merge_sort_test, TestAlreadySortedArr) {
    arr = {2, 5, 7, 9, 13, 18, 20};
    m1.sort(arr);
    EXPECT_EQ(arr, arr_check);
}

TEST(Merge_sort_test, TestReverseSortedArr) {
    arr = {20, 18, 13, 9, 7, 5, 2};
    m1.sort(arr);
    EXPECT_EQ(arr, arr_check);
}

TEST(Merge_sort_test, TestRandomNumberInsertedArr) {
    arr = {5, 13, 2, 18, 7, 20, 9};
    m1.sort(arr);
    EXPECT_EQ(arr, arr_check);
}

TEST(Merge_sort_test, TestNegativeNumbersArr) {
    arr = {-2, -7, -18, -20, -5, -13, -9};
    m1.sort(arr);
    EXPECT_EQ(arr, arr_check2);
}