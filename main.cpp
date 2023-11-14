#include "merge_sort.h"

int main()
{
    MergeSort ms;
    vector<int> array = { 1, 5, 15, 97, 20, 6, 4, 16, 54 };

    ms.printArray(array);
    ms.sort(array); 
    ms.printArray(array);
    return 0;
}
