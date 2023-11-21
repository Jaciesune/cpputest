#include "pch.h"
#include "Sortowanie.h"

//vector<int> array = { 1, 5, 15, 97, 20, 6, 4, 16, 54 };
MergeSort m1;
vector<int> arr_check = {2, 5, 7, 9, 13, 18, 20};
vector<int> arr_check2 = {-20, -18, -13, -9, -7, -5, -2};
vector<int> arr_check3 = {-9, -7, -5, -2, 13, 18, 20};
vector<int> arr_check4 = {420};
vector<int> arr_check5 = {2, 2, 5, 5, 7, 9, 13, 13, 18, 20};
vector<int> arr_check6 = {-10, -10, -8, -6, -6, -4, -1};
vector<int> arr_check7 = {-8, -5, -5, 0, 1, 6, 6, 20};
vector<int> arr_check8 = {100, 200};
vector<int> arr_check9 = {};

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

TEST(Merge_sort_test, TestPositiveAndNegativeNumbersArr) {
    arr = {-2, -7, 20, -9, -5, 18, 13};
    m1.sort(arr);
    EXPECT_EQ(arr, arr_check3);
}

TEST(Merge_sort_test, TestHollowArr) {
    arr = {};
    ASSERT_NO_THROW(m1.sort(arr));
}

TEST(Merge_sort_test, TestOneElementArr) {
    arr = {420};
    m1.sort(arr);
    EXPECT_EQ(arr, arr_check4);
}

TEST(Merge_sort_test, TestPositiveRepetitiveArr) {
    arr = {2, 5, 9, 2, 13, 20, 18, 5, 13, 7};
    //arr_check5 = {2, 2, 5, 5, 7, 9, 13, 13, 18, 20};
    m1.sort(arr);
    EXPECT_EQ(arr, arr_check5);
}

TEST(Merge_sort_test, TestNegativeRepetitiveArr) {
    arr = {-6, -10, -4, -1, -6, -10, -8};
    // arr_check6 = {-10, -10, -8, -6, -6, -4, -1};
    m1.sort(arr);
    EXPECT_EQ(arr, arr_check6);
}

TEST(Merge_sort_test, TestNegativePositiveRepetitiveArr) {
    arr = {0, 20, 1, -5, -8, -5, 6, 6};
    // arr_check7 = {-8, -5, -5, 0, 1, 6, 6, 20};
    m1.sort(arr);
    EXPECT_EQ(arr, arr_check7);
}

TEST(Merge_sort_test, Test2ElementsArr) {
    arr = {100, 200};
    m1.sort(arr);
    EXPECT_EQ(arr, arr_check8);
}

TEST(Merge_sort_test, TestOver100ElementsArr) {
    arr = {};
    for (int i = 0; i < 167; i++) {
        arr.push_back(i * 4);
        arr_check9.push_back(i * 4);
    }
    m1.sort(arr);
    EXPECT_EQ(arr, arr_check9);
}

TEST(Merge_sort_test, TestOver100ElementsRepetitiveNegativeArr) {
    arr_check9 = {};
    arr = {};
    for (int i = -50; i < 150; i++) {
        if (i % 2 == 0) {
            arr.push_back(i-1);
            arr_check9.push_back(i-1);
        }
        arr.push_back(i);
        arr_check9.push_back(i);
    }
    m1.sort(arr);
    EXPECT_EQ(arr, arr_check9);
}