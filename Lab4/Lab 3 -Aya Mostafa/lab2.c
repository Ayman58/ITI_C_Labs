#include <stdio.h>

int main()
{
	int value =0;
	int sum = 0;
    int i;

	for(i=0;sum<100;i++)
	{

	    printf("enter number\n");
		scanf ("%d", &value);
		sum=sum+value;
        printf("sum = %d\n",sum);
	}
    printf("you can't enter no.s anymore\n");
    return 0;
}
