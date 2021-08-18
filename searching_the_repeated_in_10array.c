#include <stdio.h>

void main()
{int i;
    int array[10]={6,1,7,9,2,3,5,7,4,8};
    int sum=1+2+3+4+5+6+7+8+9;
    for (i=0;i<10;i++)
    {
        sum=sum-array[i];

    }

    printf("%d",sum);

}
