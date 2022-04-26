#include <stdio.h>
#include <stdlib.h>
#include<MyLibrary.h>
#define Highlighted 0X70
#define Normal 0X07
#define HOME 71
#define PAGE_UP 73
#define PAGE_DOWN 81
#define Up 72
#define DOWN 80
#define END 79
#define ESC 27
/*
#define F1 59
#define F2 60
#define F3 61
#define F4 62
#define F5 63
#define F6 64
#define F7 65
#define F8 66
#define F9 67
#define F10 68
#define LEFT 75
#define RIGHT 77
*/
int main()
{
    int i, cur = 0, ExitFlag = 0;
    char ch;
    char menu[3][5] = {"New", "Save", "Exit"};
do
{
    textattr(Normal);   /// screen attribute function
    clrscr();          /// clear screen function
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
    case -32:            ///case Extended key
        ch = getche();   ///read 1 byte from buffer
        switch(ch)
        {
        case Up:         ///case 72
           cur--;
           if(cur < 0)
                cur = 2;
            break;
        case DOWN:         ///case down
            cur++;
           if(cur > 2)
                cur = 0;
            break;
        case HOME:
        case PAGE_UP:
                 cur =0;
            break;
        case END:
        case PAGE_DOWN:
            cur =2;
            break;
        }
        break;                ///break of case extended key

    case 13:                ///case Enter
            if(cur == 0)
            {
              clrscr();
              gotoxy(10, 7);
              printf("this is the new page ");
              getch();
            }
            else if(cur == 1)
            {
                clrscr();
                gotoxy(10, 7);
            printf("this is the save page ");
            getch();
            }
            else                  ///Exit
            {
                ExitFlag = 1;
            }
            break;

        case 9:                ///case Tab
            break;

        case ESC:                ///case ESC
            ExitFlag = 1;
            break;
    }
}while(ExitFlag == 0);

    return 0;
}
