#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int x=get_int("height: ");

        while(x<0 ||x>23)
         {
           x=get_int("height: ");
         }
         for(int r=1;r<=x ;r++)
        {
            for(int i=0;i<x-r;i++)
            {
                printf(" ");
            }
            for(int c=0;c<r+1 ;c++)
            {
                printf("#");
            }
            printf("  ");
            for(int k=0;k<r+1;k++)
            {
                printf("#");
            }

            printf("\n");
        }
}