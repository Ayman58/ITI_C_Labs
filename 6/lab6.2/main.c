#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,arr [5];
    int* ptr=arr;
    for (i=0;i<5;i++)
    {
        printf("enter number %d \n",i+1);

        scanf("%d",&ptr[i]);
    }
    for (i=0;i<5;i++)
    {
        printf("number %d is %d \n",i+1,ptr[i]);
    }
    return 0;
}
