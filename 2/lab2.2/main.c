#include <stdio.h>
#include <stdlib.h>
#include <MyLibrary.h>
int main()
{

    int n;
    do {
    clrscr();
    gotoxy(28,10);
    printf("welcome to the menue \n");
    gotoxy(20,12);
    printf("press the number next to your choice \n");
    gotoxy(20,13);
    printf("1-tea");
    gotoxy(20,14);
    printf("2-coffe\n");
    gotoxy(20,15);
    printf("3-juce\n");
    gotoxy(20,16);
    printf("4-exit\n");
    scanf("%d",&n);


    switch (n)
    {

    case 1:
        clrscr();
        gotoxy(28,10);
        printf("your choice is tea \n");
        getch();
    break;
    case 2:
        clrscr();
        gotoxy(28,10);
        printf("your choice is coffe \n");
        getch();
    break;
    case 3:
        clrscr();
        gotoxy(28,10);
        printf("your choice is juce \n");
        getch();

    }
    }while (n!=4);
    return 0;
}
