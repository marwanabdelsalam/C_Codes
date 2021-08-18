#include <stdio.h>
#include <stdlib.h>
/*
Author : Marwan Abdelsalam

this program swaps two number with 3 ways

*/



int main ()
{
	int num1=2;
	int num2=3;
	
	printf("before %d  %d\n",num1,num2);
	/*
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	*/
	
	/*
	num1=num1*num2;
	num2=num1/num2;
	num1=num1/num2;
	*/
	
	num1=num1^num2;
	num2=num1^num2;
	num1=num1^num2;

	printf("after %d  %d\n",num1,num2);
	

}

