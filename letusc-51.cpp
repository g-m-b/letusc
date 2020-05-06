#include<stdio.h>
int main()
{
	int c,subjects;
	printf("Enter the class :");
	scanf("%d",&c);
	printf("Enter the subjects failed :");
	scanf("%d",&subjects);
	switch(c)
	{
		case 1:
			if (subjects>3)
			{
				printf("No grace points");
			}
			else if(subjects<=3)
			{
				printf("5 grace points");
			}
			break;
		case 2:
			if(subjects>2)
			{
				printf("No grace points");
			}
			else if(subjects<=2)
			{
				printf("4 grace points");
			}
            break;
		case 3:
			if(subjects<1)
			{
				printf("No grace points");
			}
			else if(subjects==1)
			{
				printf("5 grace points");
			}
			break;
		default:
			printf("Invalid class");
			break;
	}
	
}
