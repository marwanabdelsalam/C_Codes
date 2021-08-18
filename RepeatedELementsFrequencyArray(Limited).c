#include <stdio.h>
#include <stdlib.h>
/*
Author : Marwan Abdelsalam // moamen
this code shows how what's number is repeated in the array and how many times it's repeated
array of fixed size and it holds values from 0 to specific number 
(example: size 20 and has repeated values from 0-19) 
*/
#define size 10

int main ()
{
	int arr[size]={1,2,3,4,5,1,1,2,3,0};
	int freq[size]={0};
	int i,j;
	
	for (i=0;i<size;i++)				
	{
		freq[arr[i]]++;
	}	
	
	/*this for loop prints the original array*/
	printf("The original array is\n");
	for (i=0;i<size;i++)
		printf("%d ",arr[i]);
	printf("\n");
	/*this for loop prints the frequency array that counts the repeated times*/
	printf("The frequency array is\n");
	for (i=0;i<size;i++)
		printf("%d ",freq[i]);
	printf("\n");
	
	/*this for loop checks if any number in the frequency array greater than 1 then this element must
	be repeated and here the index is itself the number repeated in the original array*/
	for (i=0;i<size;i++)
		{
			if (freq[i]>1)
				printf("number %d repeated %d times\n",i,freq[i]);
		}
	
	
}
