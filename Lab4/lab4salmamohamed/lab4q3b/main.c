#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[500]; int i=0,count=0;
    printf("enter string you want to calculate letters: \n") ;
    gets(str1);
    while (str1[i]!='\0'){
            count++;
            i++;

    };
printf("number of letters in this string %d",count);
    return 0;
}
