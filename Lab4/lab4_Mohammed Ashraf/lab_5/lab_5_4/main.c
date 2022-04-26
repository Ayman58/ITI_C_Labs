#include <stdio.h>
#include <stdlib.h>


struct Employee {
    int id;
    char name[20];
    int salary;
    int bonus;
    int Deduction;
};

struct Employee AddEmployee();
void DisplayEmployee(struct Employee);

int main()
{
    DisplayEmployee(AddEmployee());
}
struct Employee AddEmployee(){

    struct Employee obj;
    obj.id=20;
    strcpy(obj.name,"mohammed");
    obj.salary=2000;
    obj.bonus=200;
    obj.Deduction=20;
    return obj;
};
void DisplayEmployee(struct Employee obj){
    printf("code: %d\n",obj.id);
    printf("name: %s\n",obj.name);
    printf("net salary: %d\n",obj.salary+obj.bonus-obj.Deduction);
}
