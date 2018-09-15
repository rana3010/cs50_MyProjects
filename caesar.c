#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
int main (int argc, string argv[])
{

 if (argc==2)
 {
   int n=atoi(argv[1]) ,k;
   if (n== 0 )
   {
       printf ("please enter a number : \n");
       return 1;
   }
    string s=  get_string("plaintext: ");
    printf("ciphertext: ");
    do

    {
        if (n>26)
        {
            n -= 26;
        }
    }
    while (n>26);
    for(int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 65 && s[i] <=90)
        {
            k = n + s[i];

            if ( k > 90)
            {
                k -= 26;
            }
            printf("%c",k);
        }
        else if (s[i] >=97 && s[i] <=122)
        {
            k = n+ s[i];
            if ( k > 122)
            {
                k -= 26;
            }
            printf("%c",k);
        }
        else
        printf("%c", s[i]);
    }
    printf("\n");
    }
    else if (argc==1 )
    {
        printf ("please enter the number : \n");
        int main (int argc, string argv[]);

    }
}
