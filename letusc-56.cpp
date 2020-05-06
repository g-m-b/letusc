#include<stdio.h>
int prime(int x);
int main()
{
    int x;
    printf("\nInput an integer :\n");
    scanf("%d",&x);
    prime(x);
}

int prime(int x)
{
    int a;
    for(a=2;a<=x;a++)
        {
            if(x%a==0)
                {
                    printf("%d ",a);
                    prime(x/a);
                    break;
                }
        }
}
