#include <stdio.h>
#include <cs50.h>
int main (void)
{
    long long n;
    int sum=0,k,count=0,a=0,b;
    do
    {
       n=get_long_long("enter number: ");
    }
    while(n<0);
    while (n>0)
    {
        k=(n%10);
        b=a;
        a=k;
        sum+=k;
        n/=10;
        count++;
        if (n==0)
        break;
        k=(n%10);
        if(k!=0)
        {
        b=a;
        a=k;
        k*=2;
        }
        if(k<10)
        {
            sum+=k;
        }
        else
        {
            int h=k%10;
            sum+=h;
            k/=10;
            sum+=k;
        }
        n/=10;
        count++;
    }
 if (sum%10==0)
    {
        if (count==15 && a==3 &&(b==7||b==4))
        printf("AMEX\n");
        else if ((count==16) && (a==5) && (b==2|| b==3 || b==4 || b== 5))
        printf("MasterCard\n");
        else if((count==13&&a==4)||(count==16 && a==4))
        printf("VISA\n");
        else
        printf("invaild\n");
    }
    else
    printf("invaild\n");
}