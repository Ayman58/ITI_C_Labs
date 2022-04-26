#include <stdio.h>
#include <stdlib.h>
void main(){

char str[100];
int i=0 ,count=0;

printf("Enter a string: ");
gets(str);
while (str[i]!='\0'){
            count++;
            i++;

    };
printf("number of letters in this string %d",count);

}



