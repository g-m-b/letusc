#include<stdio.h>
int main()
{
	int distance;
	printf("Enter the distance between two cities :");
	scanf("%d",&distance);
	int x;
	printf("menu");
    printf("\n1.meters");
    printf("\n2.centimeter");
    printf("\n3.millimeter");
    printf("\n Enter the choice: ");
    scanf("%d",&x);
    switch(x)
    {
    	case 1:
    		int met;
    		met=distance*1000;
    		printf("%d meters",met);
    		break;
    	case 2:
    		int cen;
    		cen=distance*10000;
    		printf("%d centimeters",cen);
    		break;
    	case 3:
    		int mill;
    		mill=distance*10000000;
    		printf("%d millimeters",mill);
    		break;
    	default:
    		printf("Invalid choice");
    		break;
	}
}
