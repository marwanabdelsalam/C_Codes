/*
this program print the reverse of a number with taking into consideration if the number ends with zeros
examples :
 1235 --> 5321
 564001--> 100465
 985200 --> 002589
 */

#include <stdio.h>

void main()
{
    int num;
    printf("Enter any number\n");
    scanf("%d",&num);
    int numrev=0;       /*the reversed number is saved here*/
    printf("the reversed number is : ");
    /*this for loop to check if there's any zeros at the end of the number to print it separately*/
    while(num%10==0)    /* while there's no zero at the end get out of the loop*/
    {
        printf("0");
        num/=10;        /*divide by 10 after each iteration to eliminate the last digit*/
    }
    /*this for loop is the main loop that separate each digit of the main num
     and save it reversly in the numrev*/
    while(num!=0)   /*stay in the loop while the number doesn't ends (becomes zero)*/
    {
        numrev=numrev*10+num%10;
        num/=10;
    }
    printf("%d",numrev);


}
