#include "include/CppUTest/TestHarness.h"
#include "merge_sort.h"
#include "include/CppUTest/CommandLineTestRunner.h"

TEST_GROUP(MergeSort)
{
    MergeSort ms;
};

TEST(MergeSort, Test1)
{
    vector<int> array = { 1, 5, 15, 97, 20, 6, 4, 16, 54 };
    vector<int> expected = { 1, 4, 5, 6, 15, 16, 20, 54, 97 };

    ms.sort(array);
    printf("Sorted array: ");
    printf("\n");
    ms.printArray(array);
    printf("\n");
    printf("Expected array: ");
    printf("\n");
    ms.printArray(expected);
}

int main(int argumentCount, char** argumentVector)
{
    return CommandLineTestRunner::RunAllTests(argumentCount, argumentVector);
}

