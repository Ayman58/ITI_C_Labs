#include <stdio.h>
#include <stdlib.h>
#include<MyLibrary.h>
struct Emp_Struct {
 int id;
 float salary,bonus,deduct,net ;
 char name[10];

};
int main()
{
    struct Emp_Struct emp[5];
    int i;
    for (i=0; i<5;i++)
    {
        clrscr();
    printf("enter the emplyee number %d data",i+1);

    gotoxy(10, 7);
    printf("ID :");
    scanf("%d",&emp[i].id);

    gotoxy(10, 9);
    printf("name :");
    scanf("%s",emp[i].name);

    gotoxy(25, 7);
    printf("salary :");
    scanf("%d",&emp[i].salary);

    gotoxy(25, 9);
    printf("bonus :");
    scanf("%f",&emp[i].bonus);

    gotoxy(10, 11);
    printf("deduction :");
    scanf("%f",&emp[i].deduct);
    }
 return 0;
}
