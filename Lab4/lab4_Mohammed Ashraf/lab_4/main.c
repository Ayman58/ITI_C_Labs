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

int main()
{
    /*
    //program to take first name and last name of user and print full name
    char firstname[10],lastname[10],fullname[20];

    printf("Enter your first name\n");
    gets(firstname);
    printf("Enter your last name\n");
    gets(lastname);

    strcpy(fullname,firstname);
    strcat(fullname," ");
    strcat(fullname,lastname);
    printf("hi %s",fullname);
    //--------------------------------------------------------------------
    */

    /*
    //c program to take char and display if it a normal or extended key along with its ASCII value
    char ch='\0';
    printf("please enter a character\n");
    ch=getch();

    if(ch == -32){
        ch=getch();
        printf("the character is extended key and its ASCII is %d\n",ch);
    }else{
        printf("the character is normal key and its ASCII is %d\n",ch);
    }
    //---------------------------------------------------------------------------------------------
    */

    /*
    //highlight menu new colored menu "with arrows"
    int i, cur = 0, ExitFlag = 0;
    char ch;
    char menu[3][5] = {"New", "Save", "Exit"};

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
                    printf("New clicked");
                    getchar();
                }
                else if(cur == 1)
                {
                    clrscr();
                    printf("Save clicked");
                    getchar();
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


    //---------------------------------------------
    */

    /*
    // C Program to Find the Frequency of Characters in a String
    printf("write the sentence\n");
    char str[20]={'\0'};
    gets(str);
    printf("write the Characters\n");
    char holder = '\0';
    holder=getch();
    int counter=0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]==holder){
            counter++;
        }
    }
    printf("used %d Frequantly",counter);

    //----------------------------------------------------------
    */


    //C Program to Copy String Without Using strcpy()


    //-----------------------------------------------


    /*
    //C Program to Find the Length of a String without Using strlen()
    int i=0;
    printf("write the sentence\n");
    char str[20]={'\0'};
    gets(str);
    int counter = 0;
    while(1){
        if(str[i]!='\0'){
            counter++;
        }else{
            break;
        }
        i++;
    }
    printf("length is %d",counter);

    //-----------------------------------------------
    */
}
