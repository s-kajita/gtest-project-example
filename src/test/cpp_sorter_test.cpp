#include <algorithm>

#include "cpp_sorter.h"
#include "gtest/gtest.h"

TEST(cpp_sorter_test, null_term_str_sort)
{
    char arr[] = "abcdefghab";
    char eq[]  = "aabbcdefgh";
    int sz = sizeof(arr)/sizeof(arr[0]) - 1; // we need it, to avoid terminating \0 in "" definition case

    array_sort(arr, sz);

    for(int i=0; i<sz; i++)
	EXPECT_EQ(arr[i], eq[i]);
}

TEST(cpp_sorter_test, char_arr_sort)
{
    char arr[] = {'a','b','c','d','e','f','g','h','a','b'};
    char eq[]  = {'a','a','b','b','c','d','e','f','g','h'};
    int sz = sizeof(arr)/sizeof(arr[0]);

    array_sort(arr, sz);

    for(int i=0; i<sz; i++)
	EXPECT_EQ(arr[i], eq[i]);
}

TEST(cpp_sorter_test, sum)
{
  EXPECT_EQ(2, 1+1);
}
