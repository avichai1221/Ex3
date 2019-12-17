#include <stdio.h>
#include "question1.h"



void shift_element(int* arr,int i)
{
    int index=i;
    int save=*(arr+i);
    int index1=i-1;
    for ( int k = 0; k <i; k++)
    {
        *(arr+index)=*(arr+index1);
        index--;
        index1--;

    }
    *arr=save;
}

void insertion_sort(int* arr,int len)
{

    for (int i = 1; i < len; i++)
    {
        for (int j = i; j >0 && (*(arr+j-1) > *(arr+j)); j--)
        {
             shift_element((arr+j-1),1);
        }
    }
    for (int k = 0; k < len-1; k++)
    {
        printf("%d,",*(arr+k));
    }
    printf("%d",*(arr+len-1));
}

