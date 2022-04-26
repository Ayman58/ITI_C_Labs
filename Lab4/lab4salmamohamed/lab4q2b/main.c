#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[500],str2[500];
    int i;
    printf("please enter the string\n");
    gets(str1);
    for(i=0;i<strlen(str1);i++){
        str2[i]=str1[i];

    }
     str2[i] = '\0';//terminate

     printf("%s",str2);


    return 0;
}
