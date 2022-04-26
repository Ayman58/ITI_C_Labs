#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<MyLibrary.h>

#define highlighted 0x70   /// or 01110000
#define normal 0x07         ///or 00000111
int main()
{
    char ch;
    printf("Please Enter the value to see it in ASCII:");
    ///to get the ascii
    ch = getche();
    printf("\nChar is : %c, ASCII = %d", ch, ch);
    if(ch == -32)
    {
        printf("\nExtended Key");
    }
    else
    {
        printf("\nNormal Key");
    }

        return 0;
}









}
