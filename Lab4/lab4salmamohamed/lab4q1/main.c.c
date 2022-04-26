#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   char firstname[10],lastname[10],fullname[20];
   printf("please enter your firstname : ");
  gets(firstname);
    printf("please enter your lastname : ");
   gets(lastname);
   strcpy(fullname,firstname);
   strcat(fullname," ");
   strcat(fullname,lastname);

   printf("Your full name is : \n");
   puts(fullname);
    return 0;
}
