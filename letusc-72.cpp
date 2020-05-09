#include <stdio.h>
#include<string.h>
int main()
{
  	char Str1[100], Str2[100];
  	int result, i;
 	i = 0;
 	
  	printf("\n Please Enter the First String :  ");
  	gets(Str1);
  	
  	printf("\n Please Enter the Second String :  ");
  	gets(Str2);
  	
  	while(Str1[i] == Str2[i] && Str1[i] == '\0')
	  	i++;
	if(Str1[i]!=Str2[i])
   	{
   		printf("\n str1 is not equal to str2");
	}
	else
   	{
   		printf("\n str1 is Equal to str2");
	}
  	
  	return 0;
}
