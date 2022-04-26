#include <stdio.h>
#include <stdlib.h>
#include "E:\iti\lec\C\MyLibrary.h"

#define Highlighted 0X70
#define Normal 0X07

#define ENTER 13
#define ESC 27
#define HOME 71
#define UP 72
#define PAGE_UP 73
#define LEFT 75
#define RIGHT 77
#define END 79
#define DOWN 80
#define PAGE_DOWN 81
#define TAB 9

void RunInterface();
void RunNewInterface();
void RunDispInterface();

int i, cur = 0,scur = 0, ExitFlag = 0;
char ch;
char menu[3][8] = {"New", "Display", "Exit"};
char NewMenu[5][10]= {"id", "name", "salary","bonus","Deduction"};

struct Employee {
    int id;
    char name[20];
    int salary;
    int bonus;
    int Deduction;
};

struct Employee singleEmp;
int main()
{
    RunInterface();
}

void RunInterface(){

    do
    {
        textattr(Normal);
        clrscr();

        for(i=0; i<3; i++)
        {

            if( i == cur )
                textattr(Highlighted);
            else
                textattr(Normal);

            gotoxy(10, 7+i*3);
            _cprintf("%s", menu[i]);
        }

        ch = getche();
        switch(ch)
        {
        case 0:
        case -32:  ///case Extended key
            ch = getche();  ///read 1 byte from buffer
            switch(ch)
            {
            case UP: ///case 72
               cur--;
               if(cur < 0)
                    cur = 2;
                break;
            case DOWN:  ///case down
                cur++;
               if(cur > 2)
                    cur = 0;
                break;

            case HOME:
                cur = 0;
                break;
            case PAGE_UP:
                cur = 0;
                break;
            case END:
                cur = 2;
                break;
            case PAGE_DOWN:
                cur = 2;
                break;

            }
            break;  ///break of case extended key

            case ENTER: ///case Enter
                if(cur == 0)
                {
                    clrscr();
                    RunNewInterface();
                    //getchar();
                }
                else if(cur == 1)
                {
                    clrscr();
                    RunDispInterface();
                    //getchar();
                }
                else  //Exit
                {
                    ExitFlag = 1;
                }
                break;

            case TAB: ///case Tab
                cur++;
               if(cur > 2)
                    cur = 0;
                break;

            case ESC: ///case ESC
                ExitFlag = 1;
                break;
        }
    }while(ExitFlag == 0);
}
void RunNewInterface(){
    gotoxy(15, 7+0*3);
    do{
        for(int i=0; i<5; i++)
        {
            gotoxy(10, 7+i*3);
            _cprintf("%s", NewMenu[i]);
            if(i==0){
                scanf("%d",&singleEmp.id);
            }else if(i==1){
                scanf("%s",&singleEmp.name);

            }else if(i==2){
                scanf("%d",&singleEmp.salary);

            }else if(i==3){
                scanf("%d",&singleEmp.bonus);

            }else if(i==4){
                scanf("%d",&singleEmp.Deduction);

            }
        }
        RunInterface();



    }while(ExitFlag == 0);
}
void RunDispInterface(){
    printf("code: %d\n",singleEmp.id);
    printf("name: %s\n",singleEmp.name);
    printf("net salary: %d\n",singleEmp.salary+singleEmp.bonus-singleEmp.Deduction);
    getche();
}

