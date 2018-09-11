#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int a[16];
    int count=0,sum=0;
     long long n;
    do
    {
       n=get_long_long("enter number: ");
    }
    while(n<0);
    for(int i=0; i<16;i++)
    {
        a[i]=n%10;
        n/=10;
        count++;
        if(n==0)
        break;
    }
    for(int i=0;(i*2+1)<count;i++)
    {
        if((a[1+i*2]*2)<10)
        {
            sum+=a[1+i*2]*2;
        }
        else
        {
            int s=(a[1+i*2]*2)%10;
            sum+=s;
            int f=(a[1+i*2]*2)-s;
            f=f/10;
            sum+=f;
         }
    }
     for(int i=0;(i*2)<count;i++)
    {
        sum+=a[i*2];
    }
    if (sum%10==0)
    {
        if (count==15 && a[14]==3 &&(a[13]==(7|4)))
        printf("AMEX\n");
        else if (count==16 &&a[15]==5&&(a[14]==(1|2|3|4|5)))
        printf("MasterCard\n");
        else if((count==13&&a[12]==4)||(count==16 && a[15]==4))
        printf("VISA\n");
        else
        printf("invaild\n");
    }
    else
    printf("invaild\n");
}