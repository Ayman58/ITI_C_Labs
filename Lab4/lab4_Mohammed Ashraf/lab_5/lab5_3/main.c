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
    struct employee singleEmp[5];
    for(int i = 0; i< 5; i++)
    {
        printf("add info for employee number %d\n",i+1);

        printf("enter employee id\n");
        scanf("%d",&singleEmp[i].id);

        printf("enter employee name\n");
        scanf("%s",singleEmp[i].name);

        printf("enter employee salary\n");
        scanf("%d",&singleEmp[i].salary);

        printf("enter employee bonus\n");
        scanf("%d",&singleEmp[i].bonus);

        printf("enter employee Deduction\n");
        scanf("%d",&singleEmp[i].Deduction);


    }
    for(int i=0;i<5;i++){
        printf("employee id: %d \n",singleEmp[i+1].id);
        printf("employee name: %s \n",singleEmp[i+1].name);
        printf("employee salary: %d \n",singleEmp[i+1].salary);
        printf("employee bonus: %d \n",singleEmp[i+1].bonus);
        printf("employee Deduction: %d \n",singleEmp[i+1].Deduction);
    }


}
