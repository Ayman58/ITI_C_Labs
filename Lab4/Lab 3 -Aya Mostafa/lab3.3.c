#include<stdio.h>

int main()
{
    int i,j ;
    int sum[3]={0};
    int array[3][4];

    for (i=0;i<3;i++)
    {
        printf("enter student ID ;");
        scanf("%d", &array[i][0]);
        printf("Student %d\n", array[i][0]);

        for (j=1;j<5;j++)
        {
            printf("enter subject degree ;");
            scanf("%d",&array[i][j]);
            sum[i]=sum[i]+array[i][j];
        }
        printf("The grades's sum for student %d is %d\n", array[i][0] , sum[i]);
    }
    return 0;
}
