#include <stdio.h>
#include <stdlib.h>
/*
Author : Marwan Abdelsalam

this program converts the number into binary

*/
#define BITSNUMBER sizeof(int)*8

void ConvertBinary(int num,int arr[])
{	int i;

		for (i=0;i<BITSNUMBER;i++)
	{		
		arr[i]=(((1<<(BITSNUMBER-1))&(num))?1:0);
		num=num<<1;
		 //if we want to print it diectly without saving in an array
		//printf("%d",(((1<<(BITSNUMBER-1))&(num))?1:0));	
		//num=num<<1;

	}
}

int main ()
{
	int num;
	int i;
	scanf("%d",&num);
	int arr[BITSNUMBER];
	
	//taking the number to be converted and the address of the array which it will put the binary number in its elements
	ConvertBinary(num,arr);


	//print the array
	for (i=0;i<BITSNUMBER;i++)
		printf("%d",arr[i]);
}

