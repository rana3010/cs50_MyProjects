#include <stdio.h>
#include <cs50.h>
#include<math.h>
int main(void)
{
    float x =get_float("change owed: ");
    int count=0;
   while(x<=0)
   {
       x=get_float("change owed: ");
   }
 int y = x;
	x =round(x * 100);
	y = y * 100;
	int z=x;
	z=z%y;
	x=z;
  while(x>=25)
    {
        x-=25;
        count++;
    }
    while(x>=10)
    {
        count++;
        x-=10;

    }
    while(x>=5)
    {
      count++;
        x-=5;

    }
    while(x>=1)
    {
         count++;
        x-=1;
    }

    printf("%i\n",count);
}