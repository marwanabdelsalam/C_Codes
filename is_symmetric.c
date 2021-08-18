/*
this code checks if the array is symmetric or not
the size must be odd
*/
#include <stdio.h>


#define size 11

void main()
{
    int arr[size]={1,2,3,4,5,6,5,4,1,2,1};
    int symm=1; /*first assume the array as a symmetric*/
    int i=0;
    /*this loop executes size/2 times if all the elements are symmetric
        but if it find any unequal elements it break and print not symmetric and symm=0 so when it checks it at
        the end of the code it doesn't meet the condition of symmetric*/
    for(i=0;i<(size/2);i++)
    {
        printf("i=%d arr[%d]=%d arr[%d]=%d\n",i,i,arr[i],size-1-i,arr[size-1-i]);

        if (arr[i]!=arr[size-1-i])
        {
            symm=0;
            printf("not symmetric\n");
            break;
        }
    }

    if(symm==1)
        printf("symmetric");

}
