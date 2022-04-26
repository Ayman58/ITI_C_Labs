#include<stdio.h>

int main()
{
    int array[4]={5,9,2,10};
    int i;
    int max=array[0];
    int min=array[0];

    for (i=0;i<4;i++)
    {
        if (array[i]>max)
        {
            max = array [i];
        }

        if (array[i]<min)
        {
            min =array[i];
        }


    }
        printf("max is %d and min is %d ",max,min);
    return 0;
}
