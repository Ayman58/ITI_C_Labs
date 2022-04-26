#include <stdio.h>
#include <stdlib.h>

void swap(int* a,int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;

}
int main()
{
 int x=3,y=5;

  swap(&x,&y);

  printf("%d\n %d\n",x,y);

    return 0;
}
