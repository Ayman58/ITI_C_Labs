#include <stdio.h>
#include <stdlib.h>
int size ;
int* incrementarray()
{
    int i;
    int* arr ;
    printf("enter size:");
    scanf("\n%d",&size);

    arr=(int*)malloc(size*sizeof(int));
    for (i=0;i<size;i++)
    {
        printf("enter num %d:",i+1);
        scanf("%d",&arr[i]);
        arr[i]+=2;
    }
    return arr;
}
int main()
{
    int i;
    int* result = incrementarray();
    for(i=0;i<size;i++)
    {
        printf("incr_num =%d\n",result[i]);
        //free(arr);
    }

    return 0;
}
