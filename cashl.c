#include <stdio.h>
#include <cs50.h>
int main(void)
{
    float x =get_float("change owed: ");
    int count=0;
   while(x<0)
   {
       x =get_float("change owed: ");
   }
    x*=100;
    while(x>=25)
    {
        x-=25;
        count++;
    }
    while(x>=10)
    {
        x-=10;
        count++;
    }
    while(x>=5)
    {
        x-=5;
        count++;
    }
    while(x>=1)
    {
        x-=1;
        count++;
    }
    printf("%i\n",count);
}