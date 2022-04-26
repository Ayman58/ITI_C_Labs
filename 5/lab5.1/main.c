///1- Write a function takes 3 numbers as parameter,
///and returns the largest one among them...
/// write a program to test it.

#include <stdio.h>
#include <stdlib.h>

 void fun1(int x,int y,int z);

int main()
{
    int x=3;
    int y=12;
    int z=8;
    fun1(x,y,z);
    return 0;
}
void fun1(int x,int y,int z)
{
    if (x>=y && x>=z)

          printf("the largest num is: %d ",x);
    else if (y>=x && y>=z)

         printf("the largest num is: %d ",y);
    else
         printf("the largest num is: %d ",z);
}
