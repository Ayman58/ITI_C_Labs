#include<stdio.h>
#include<string.h>


int main ()
{
  char str[500], freq[50] = {0}; // array to save frequency of appearing
  int i, n, j, count = 0;
  printf("please enter a string :\n");
   gets(str);    //input from user
  n = strlen(str);         // finding string length
  for(i=0;i<n;i++){
    count=1;
    for(j=i+1;j<n;j++){
            if(str[i]==str[j])// compare each char with the one after it
                {
        count++; // increase value of count if char is repeated
        freq[j]='e';// for not calculating frequency of the same element again
        }
    }
    if (freq[i]!= 'e'){
        freq[i]=count;
    }

  }
  for (i=0;i<n;i++){
        if (freq[i]!='e')
    printf("frequency of letter %c is %d \n ",str[i],freq[i]);// printing values
  }

  return 0;
}
