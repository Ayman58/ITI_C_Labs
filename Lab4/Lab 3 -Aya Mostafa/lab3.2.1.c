
#include<stdio.h>

int main()
{
   int array[5];
   int loop;
   int i;
   int max,min;
   int j;

    for(i=0;i<5;i++)
    {


    printf("plz enter a number:");
    scanf("%d",&array[i]);

    }
   for(loop = 0; loop < 5; loop++)
   {


    printf("%d ",array[loop]);

    if (array[0]>array[loop]);
    {
        printf("max of array : %d",array[0]>array[loop]);
    }

    }

    return 0;
}
