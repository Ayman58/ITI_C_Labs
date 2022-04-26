#include <stdio.h>
#include <stdlib.h>


struct employee {
    int id;
    char name[20];
    int salary;
    int bonus;
    int Deduction;
};

int main()
{
    struct employee obj;
    obj.id=20;
    strcpy(obj.name,"mohammed");
    obj.salary=2000;
    obj.bonus=200;
    obj.Deduction=20;

    printf("code: %d\n",obj.id);
    printf("name: %s\n",obj.name);
    printf("net salary: %d\n",obj.salary+obj.bonus-obj.Deduction);


}
