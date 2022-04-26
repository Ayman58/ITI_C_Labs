#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    do{
            printf("please press the button to display ascii code : \n");
        c=getche();
        if((c==-32) | (c== 0) ){
            c=getch();
            printf("Extended key");
            printf("\n ascii code for this button is : %d\n",c);

            }
            else
                printf("normal key");
                printf("\n ascii code for this button is : %d\n",c);
    }while(c!=27);// code will be running until esc button pressed
    return 0;
}
