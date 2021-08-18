/*this program reverse the array Ex 1 2 3 4 5 6 -->  6 5 4 3 2 1*/
#include <stdio.h>
#define size 7

void main()
{
    int arr[size]={1,0,3,9,4,5,7};
    int temp[size/2];  /*temp array to save the first half of the original array in it before overwriting*/
    int i;
    /*for loop printing the array before reversing*/
    printf(" before -> ");
    for (i=0;i<size;i++)
        printf("%d ",arr[i]);
    /*for loop for to save the first half of the original array*/
    for(i=0;i<size/2;i++)
    {
        temp[i]=arr[i];
    }
    /*for loop to reverse the array */
    for (i=0;i<size/2;i++)
    {
        arr[i]=arr[size-i-1];   /*put the last element in the first element*/
        arr[size-i-1]=temp[i];  /*put the first element saved in temp array -> to last element in the original array*/
    }
    /*for loop printing the array before reversing*/
    printf("\n after -> ");
    for (i=0;i<size;i++)
        printf("%d ",arr[i]);


}
