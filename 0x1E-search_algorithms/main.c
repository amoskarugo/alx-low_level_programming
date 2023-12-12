#include "search_algos.h"

int main(void)
{
    int array[] = {
        10, 1, 42, 3, 4, 42, 6, 7, -1, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

     linear_search(array, size, 3);
     linear_search(array, size, 42);
     linear_search(array, size, 999);
    return (EXIT_SUCCESS);
}