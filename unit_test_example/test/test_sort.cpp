#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "shellsort_functions.hpp"

TEST(ArraysEqual, AnyElementsCount) 
{
    int array_size = 6;
    int* actual = new int[array_size] {1,8,2,5,3,11};
    int* expected = new int[array_size] {1,2,3,5,8,11};
    
    int gaps[] = {4,1,3,7,12,34,5,9,8,10};
    shella::generate_3smooth_gaps(gaps,10);
    
    shella::shell_sort(actual, gaps, array_size);

    for (int i = 0; i < array_size; i++)
    {
        ASSERT_EQ(expected[i], actual[i])
            << "Ожидаемый и отсортированный массив отличаются на индексе: "
            << i
            << " значение ожидаемого и отсортированного соответсвенно: "
            << expected[i] << ' ' << actual[i];
    }
}

int main(int argc, char** argv) 
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
