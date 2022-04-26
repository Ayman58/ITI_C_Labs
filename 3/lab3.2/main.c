#include <stdio.h>
#include <stdlib.h>

int main()
{
   int arr[4]={3,4,2,1};
   int i;
   for (i=0;i<4;i++)
    {
    if (arr[i]>arr[i+1])
        if(arr[i]>arr[i+2])
        printf("%d is the max num \n",arr[i]);
    }
     for (i=0;i<4;i++)
    {
    if (arr[i]<arr[i+1])
        if(arr[i]<arr[i+2])
        printf("%d is the min num \n",arr[i]);
    }

    return 0;
}
