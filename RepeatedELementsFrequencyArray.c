#include <stdio.h>
#include <stdlib.h>
/*
Author : Marwan Abdelsalam
this code shows how what's number is repeated in the array(of any size) and how many times it's repeated
*/
#define size 10

int main ()
{
	int arr[size]={1,2,3,4,5,6,7,8,9,9};
	int freq[size]={0};
	int alreadydone=0;
	int i,j;
	for (i=0;i<size;i++)				
	{
		alreadydone=0;
		/*this loop checks the elemnt number i with all the previous numbers if any of them is equal 
		to the element number i this means that it had already been taken into consideration
		so it enters the if condition and make the alreadydone is 1 */
		for (j=0;j<i;j++)
			{
				if (arr[i]==arr[j])
						alreadydone=1;
			}
			/*this if checks if the number is counted before or not*/
		if (alreadydone==0)
			{	
					/*this is the main for loop of the code which counts the repeated numbers*/
					/*it checks the element number i with all elements after it and when it finds a similar
					  element it increments the element in the corresponding index in the frequency array*/
				for(j=i+1;j<size;j++)
					{
						if (arr[i]==arr[j])
								freq[i]++;
					}
		}
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
	
	/*this for loop check if any element is not zero in the frequency array then it must be repeated
	*/
	for (i=0;i<size;i++)
	{
		if (freq[i]!=0)
		{
			printf("number repeated %d , repeted %d times\n",arr[i],freq[i]+1);
		}
	}
	
}
