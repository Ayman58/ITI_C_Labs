#include <stdio.h>
#include <stdlib.h>
void main(){
char str[20];
int i,count=0;
printf("Enter string : ");
gets(str);
printf("Enter char :");
char ch;
scanf("%c",&ch);
for(i=0;i<sizeof(str);i++){
    if(ch==str[i])
        count++;
}

printf("Frequency of %c =%d",ch,count);




}
