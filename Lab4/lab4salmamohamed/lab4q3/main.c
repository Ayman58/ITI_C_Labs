#include <stdio.h>
#include <stdlib.h>
#include <MyLibrary.h>
#define esc 27
#define Home 71
#define uparr 72
#define downarr 80
#define leftarr 75
#define rightarr 75
#define  enter 13
#define  end 79
#define  pup 73
#define  pdown 81
#define highlighted 0x70
#define normal 0x07

int main()
{
    // to display menu option
    char menu[3][5] ={
    "new","save","Exit"},ch;int i;
    int curr=0, exitflag =0;
    do{

    for(i=0;i<3;i++){


    if(curr == i){
            textattr(highlighted);

    }
    else
        textattr(normal);

    gotoxy(10,7+(i*3));
    printf("%s",menu[i]);}
    ch=getch();
    switch (ch){

        case -32 :
            ch=getche();
                switch(ch){
                case uparr:
                    curr--;
                    if(curr<0){
                        curr=2;
                        }
                        break;
                    case downarr:
                        curr++;
                    if(curr>2){
                        curr=0;
                        }
                        break;
                    case Home:
                        curr=0;

                        break;
                        case pup:
                        curr=0;

                        break;
                        case end:
                        curr=2;
                        case pdown:
                        curr=2;

                        break;}
                        break;

                        case 13:
                            if (curr == 0){
                            clrscr();
                            gotoxy(10,7);
                           printf("\n this is new window ");
                           getch();
                           clrscr();}
                           if (curr == 1){
                            clrscr();
                            gotoxy(10,7);
                           printf("\n this is save window ");
                           getch();
                           clrscr();}
                           if (curr == 2){
                                 exitflag =1;

                            break;
                         }
                         break;
                        case esc:
                            exitflag =1;
                            break;



     }
    }while( exitflag !=1);


    return 0;
}
