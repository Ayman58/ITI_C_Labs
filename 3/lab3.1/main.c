#include <stdio.h>
#include <stdlib.h>
#define size 3
int main()
{

    int arr [size];
    int i;
    for ( i=0; i<size ;i++)
    {
        printf("enter element no %d \n",i+1);
        scanf("%d",&arr[i]);
    }

    for ( i=0; i<size ;i++)
    {
        printf("%d",arr[i]);

    }
    return 0;
}
