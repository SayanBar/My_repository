#include <stdio.h>
#include "hw1.h"

char reverse_string(char *str,int length)
{
char arr[length];
int i=0;

if(length==0 || str[0]=='\0')
return 1;

while(*str)
str++;

str--;

while(i<length)
{
arr[i]=*str;
str--;
i++;
}

arr[i]='\0';
printf("Reversed string=%s\n",arr);

return 0;
}
