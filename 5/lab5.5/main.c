#include <stdio.h>
#include <stdlib.h>
#include<MyLibrary.h>
struct Emp_Struct {
 int id;
 float salary,bonus,deduct,net ;
 char name[10];
};
int i=0;
struct Emp_Struct emp[5];
void AddEmployee(){

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
    i++;
}
void DisplayEmployee(struct Emp_Struct emp)
{
    emp.net =(emp.salary+emp.bonus)-emp.deduct;
    clrscr();
    gotoxy(10, 13);
    printf("employee code is:%d ",emp.id);
    gotoxy(10, 15);
    printf("employee name is :%s",emp.name);
    gotoxy(10, 17);
    printf("net salary is: %f",emp.net);
}
int main()
{
  for (i=0;i<5;i++)
  {
    AddEmployee();
    DisplayEmployee(emp[i]);
  }
 return 0;
}
