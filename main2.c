#include <stdio.h>
#include "question1.h"
int main()
{
 int array[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d",(array+i));
    }
    insertion_sort(array,SIZE);

    return 0;
}
