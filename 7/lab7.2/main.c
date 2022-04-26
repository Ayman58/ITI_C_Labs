#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j,i,std ,subj,sum=0,avg=0;
    int** pptr =NULL;
    printf("enter student num:\n");
    scanf("%d",&std);
    printf("enter subject num:\n");
    scanf("%d",&subj);
    pptr=malloc(std*sizeof(int*));
    for (i=0; i<std;i++)
    {
    pptr[i]=malloc(subj*sizeof(int));
    }
    for (i=0;i<std;i++)
    {
        for(j=0;j<subj;j++)
        {
            printf("enter std %d subj %d degree\n",i+1,j+1);
            scanf("%d",&pptr[i][j]);
            sum +=pptr[i][j];
        }
        printf("the sum is:%d\n",sum);
        sum=0;
    }


    int a=0;
    for (i=0;i<subj;i++)
    {
        avg = 0;
    for (j=0;j<std;j++)
    {
        avg+=pptr[i][j];
    }
    avg/=std;
    printf("the avg of subj %d is : %d\n",i+1,avg);
    }

    return 0;
}
