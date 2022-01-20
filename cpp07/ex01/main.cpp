#include "iter.hpp"

int main(void)
{
    int arr[7] = {1, 2, 3,4, 5, 6, 7};
    char carr[2] = {'h', 'i'};
    iter(arr, 7, printIter);
    iter(carr, 2, printIter);

    return (0);
}