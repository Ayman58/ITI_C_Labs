#include <stdio.h>
#include <stdlib.h>
#define std 3
#define sub 4
int main()
{
    int i,j;
    float avg [sub]={0};
    int degree [std][sub];
    for (i=0;i<std;i++)
    {
        printf("please enter grade of std %d \n",i+1);
        for (j=0;j<sub;j++)
            {printf("enter degree %d \n",j+1);
            scanf("%d",&degree[i][j]);
            avg[j]+=degree[i][j];
            }
    avg[j]/=std;
    }
    for (i=0;i<3;i++)
    {
    printf("%d\t",avg[j]);
    }
    return 0;
}
