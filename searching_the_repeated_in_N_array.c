#include <stdio.h>
/*

 This code get the reapeated element in an array of N elements:
 from 1 to N (not sorted) elements  ,, and a repeated element and get the repeated element
 
 */


void main()
{	
{   int i;
    int size=100;
    int array[size];
	/*Equation to find the sum of an array from 1 to size without any missing element*/
    int sum=((size-1)/2.0)*((size-1)+1.0);
	
	/*for loop to assign elemets in our array by 1 in the first element and
	the last element will be 100 which is out of scope  */
    for (i=0;i<size;i++)
    {
        array[i]=i+1;
    }
	
	/*put the repeated number from 1 to size-1 in the last element*/
	array[size-1]=6;

	/*for loop to subtract each element in our array from the calculated sum 
		by the end of this loop the repeated number will be in sum but negative*/
    for (i=0;i<size;i++)
    {
        sum=sum-array[i];

    }

    printf("%d",sum);

}
