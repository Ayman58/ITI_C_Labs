#include <stdio.h>
#include <stdlib.h>
#include <MyLibrary.h>
int main()
        {
          int col,row,i,size,totalSize;
          printf("please enter size of magic box\n");
          scanf("%d",&size);
          totalSize =size * size ;
          printf("total magic square size %d\n",totalSize);

          if(size%2!=0){
          for(i=1;i<=totalSize;i++)
          {
                if(i==1)
                {
                  row =1;
                  col=(size+1)/2;
                }
                else if(((i-1) % size) == 0)
                {
                  row++;
                }
                else
                {
                  row--; col--;
                  if(row == 0)
                   row = size;
                  if(col == 0)
                   col = size;
                }
                gotoxy(col*5,row*2+2);
           printf("%d",i);
          }
          }
          return 0;
        }
