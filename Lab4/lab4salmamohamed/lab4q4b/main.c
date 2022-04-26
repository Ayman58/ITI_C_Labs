#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[500],str2[500]; int i=0,count=0;
    printf("enter string you want to calculate letters: \n") ;
    gets(str1);
    for (i=0;i<strlen(str1);i++){
        if((str1[i]>='A' && str1[i]<='Z')||(str1[i]>='a' && str1[i]<='z')&&str1[i]!='\0')
            str2[i]=str1[i];
            else
                str2[i]=' ';

    }
    str2[i]='\0';

    puts(str2);

    return 0;
}
