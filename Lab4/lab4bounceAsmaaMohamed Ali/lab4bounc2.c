#include <stdio.h>
#include <stdlib.h>
void main(){
char str1[100]={'/0'};
char str2[100];
int i;
printf("Enter string : ");
gets(str1);

for(i=0;i<sizeof(str1);i++){
    str2[i]=str1[i];
}

printf("the str2 is : ");
puts(str2);




}

