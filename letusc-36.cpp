#include<stdio.h>
int main()
{
    int num,div;
 
    for(num=2;num<=300;num++)
        {
            for(div=2;div<num;div++)
               {
                   if(num%div==0)
                    {
                        break;
                    }
                    else if(div==num-1)
                    {
                      printf ("\n%d",num);
                    }
                }
        }
   }
