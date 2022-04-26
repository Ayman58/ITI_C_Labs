#include <stdio.h>
#include <stdlib.h>
#include "E:\iti\lec\C\MyLibrary.h"


int LargestDetector(int n1,int n2,int n3);

int main()
{
    //Write a function takes 3 numbers as parameter, and returns the largest one among them... write a program to test it

    LargestDetector(4,5,10);
    //---------------------------------------------------------------------------------------------------------------------
}

int LargestDetector(int n1,int n2,int n3){
    if(n1>n2){
        if(n1>n3){
            printf("the largest number is %d",n1);
        }else{
            printf("the largest number is %d",n3);
        }
    }else{
        if(n2>n3){
            printf("the largest number is %d",n2);
        }else{
            printf("the largest number is %d",n3);
        }
    }
}
