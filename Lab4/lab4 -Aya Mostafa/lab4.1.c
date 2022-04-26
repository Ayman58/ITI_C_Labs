#include<stdio.h>

int main ()
{
    char Fname[10],Lname[10],Fullname[20];

    printf("\n Enter first name :");
    gets(Fname);

    printf("\n Enter last name :");
    gets(Lname);



    printf("Hello : %s %s",Fname ,Lname);
    return 0;

}
