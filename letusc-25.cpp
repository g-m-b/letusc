#include<stdio.h>
#include<conio.h>
int main()
{
   int x,y;
   printf("\n enter the points x and y : ");
   scanf("\n%d\n%d",&x,&y);
   if(x==0&&y==0)
{
   printf("\n points lies on origin");
}
   else
{
   if(x==0)
{
   printf("\n points lies on x-axis");
}
   else
{
   if(y==0)
{
   printf("\n points lies on y-axis");
}
   else
{
   printf("\n x=%d,y=%d",x,y);
}
}
}
}
