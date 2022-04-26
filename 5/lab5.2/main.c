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

    struct Emp_Struct emp1;
    printf("enter the emplyee data");
    gotoxy(10, 7);
    printf("ID :");
    scanf("%d",&emp1.id);

    gotoxy(10, 9);
    printf("name :");
    scanf("%s",emp1.name);

    gotoxy(25, 7);
    printf("salary :");
    scanf("%d",&emp1.salary);

    gotoxy(25, 9);
    printf("bonus :");
    scanf("%f",&emp1.bonus);


    gotoxy(10, 11);
    printf("deduction :");
    scanf("%f",&emp1.deduct);

    emp1.net =(emp1.salary+emp1.bonus)-emp1.deduct;
    clrscr();
    gotoxy(10, 13);
    printf("employee code is:%d ",emp1.id);
    gotoxy(10, 15);
    printf("employee name is :%s",emp1.name);
    gotoxy(10, 17);
    printf("net salary is: %f",emp1.net);

    return 0;
}
