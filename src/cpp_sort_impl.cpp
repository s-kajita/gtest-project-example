#include <algorithm>
#include <iostream>
#include "cpp_sorter.h"

int main()
{
    char arr[] = "abcdefghab";
    int sz = sizeof(arr)/sizeof(arr[0]) - 1; // we need it, to avoid terminating \0 in "" definition case

    std::cout << arr << std::endl;
    array_sort(arr, sz);
    std::cout << arr << std::endl;

}
