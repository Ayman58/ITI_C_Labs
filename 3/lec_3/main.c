#include <stdio.h>
#include <stdlib.h>
#define size 3
#define std 3
#define subjects 4

int main()
{
/*
    //C Program to take an array elements from user, then print them out "using 2 for loops"
    int ar [size]={0};
    for(int j=0;j<size;j++){
        printf("please enter number %d \n",j+1);
        scanf("%d",&ar[j]);
        for(int i=0;i<size;i++){
            printf("you entered %d \n",ar[i]);
        }
    }
    //----------------------------------------------------------------------------------------
*/
/*
    //C Program to find the minimum & maximum value of array elements. (Min_Max Array)
    int ar [size]={2,-1,0};
    int max=ar[0];
    int min=ar[0];
    for(int i=0;i<size;i++){
        if(ar[i]>max){
            max=ar[i];
        }
        if(ar[i]<min){
            min=ar[i];
        }
    }
    printf("max number is %d \n",max);
    printf("min number is %d \n",min);
    //--------------------------------------------------------------------------------
*/
/*
    //C Program to find Sum of each row in a 2D Array. (3 std, 4 subjects)
    int degree [std] [subjects];
    int sum [std]={0};
    for(int i=0;i<std;i++){
        printf("enter grades of student number (%d) \n",i+1);
        for(int j=0;j<subjects;j++){
            printf("enter degree %d \n",j+1);
            scanf("%d",&degree[i][j]);
            sum[i]+=degree[i][j];
        }
    }

    for(int i=0;i<size;i++){
        printf("you entered %d \n",sum[i]);
    }
    //--------------------------------------------------------------------

*/

    //Calculate average of each column in a 2D Array.
    int degree [std] [subjects];
    int avg [subjects]={0};
    int i,j;
    for(i=0;i<std;i++){//entered row
        printf("enter grades of student number (%d) \n",i+1);
        for(j=0;j<subjects;j++){  //entered column
            printf("enter degree %d \n",j+1);
            scanf("%d",&degree[i][j]);
            avg[j]+=degree[i][j];
        }
        avg[j]/=std;
    }

    for(int i=0;i<subjects;i++){
        printf("you entered %d \n",avg[j]);
    }
    //--------------------------------------------------------------------

/*
    //C Program to add two matrix and put the result in a third one, then print the result.

    int a[std][subjects] = {
   {0, 1, 2, 3} ,
   {4, 5, 6, 7} ,
   {8, 9, 10, 11}  };
    int b[std][subjects] = {
   {0, 1, 2, 3} ,
   {4, 5, 6, 7} ,
   {8, 9, 10, 11}   };
    int c[std][subjects];

    for(int i=0;i<std;i++){
        for(int j=0;j<subjects;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for (int i = 0; i < std; ++i)
        for (int j = 0; j < subjects; ++j) {
            printf("%d   ", c[i][j]);
            if (j == subjects - 1) {
                printf("\n\n");
            }
        }

    //---------------------------------------------------------------------
*/
}
