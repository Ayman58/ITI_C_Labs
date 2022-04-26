#include <stdio.h>
#include <stdlib.h>
#include <MyLibrary.h>
#include <conio.h>
#define size 20
#define x_start 10
#define y_start 7
#define highlighte 0x70
#define normal 0x07
#define extended_key0 0
#define extended_key32 -32
#define HOME 71
#define ENTER 13
#define BACkSPACE 8
#define END 79
#define ESC 27
#define DEL 83
#define LEFT 75
#define RIGHT 77

int main()
{
    int current = 0,end = 0,temp,exit_flag = 0;
    char txt[size], ch;
    int cursor = x_start;
    clrscr();
    gotoxy(cursor+current, y_start);
    textattr(highlighte);
    do
    {
        ch = getch();
        switch (ch)
        {
            case extended_key0:
                ch = getch();
                switch (ch)
                {
                    case HOME:
                        current = 0;
                        gotoxy(cursor+current, y_start);
                        break;
                    case END:
                        current = end;
                        gotoxy(cursor+current, y_start);
                        break;
                }
                break;
            case extended_key32:
                ch = getch();
                switch (ch)
                {
                    case LEFT:
                        if (current > 0)
                        {
                            current --;
                            gotoxy(cursor+current, y_start);
                        }
                        break;
                    case RIGHT:
                        if (current != end)
                        {
                            current ++;
                            gotoxy(cursor+current, y_start);
                        }
                        break;
                    case DEL:
                        if(current < end)
                        {
                            temp = current;
                            while (temp <= end)
                            {
                                txt[temp] = txt[temp-1];
                                temp++;
                            }
                            end --;
                            gotoxy(cursor+current, y_start);
                            temp = current;
                            while (temp < end)
                            {
                                printf("%c", txt[temp]);
                                temp++;
                            }
                            printf(" ");
                            gotoxy(cursor+current, y_start);
                        }
                        break;

                    }
                break;
            case ENTER:
                gotoxy(15, 10);
                printf("%s\n", txt);
               textattr(normal);
                exit_flag = 1;
                break;
            case ESC:
                exit_flag = 1;
                break;
            case BACkSPACE:
                if(current > 0)
                {
                    temp = current;
                    while (temp <= end)
                    {
                        txt[temp-1] = txt[temp];
                        temp++;
                    }
                    current --;
                    end --;
                    gotoxy(cursor+current, y_start);
                    temp = current;
                    while (temp < end)
                    {
                        printf("%c", txt[temp]);
                        temp++;
                    }
                    printf(" ");
                    gotoxy(cursor+current, y_start);
                }
                break;
            default:
                if (current < size-1)
                {
                    txt[current] = ch;
                    if (current == end)
                    {
                        txt[current+1] = '\0';
                        end += 1;
                    }
                    current += 1;
                    printf("%c", ch);
                }
                break;
        }
    }while (exit_flag == 0);
    return 0;
}
