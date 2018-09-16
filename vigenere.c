#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main(int argc, string argv[])
{
    if (argc == 2)
    {
        int n = strlen(argv[1]);
        int z;
        string a = argv[1];
        for (int i = 0; i < n ; i++)
        {
           if ( !isalpha (a[i]))
           {
               printf("error eneter the scret code \n");
               return 1;
           }
        }
        int s[n];
        for (int i =  0; i < n; i++)
        {
            if (isupper ( a[i] ) )
                {
                    s[i]= (int)a[i] % 65;
                }
            else if (islower( a[i] ))
                {
                    s[i] = (int)a[i] %97;
                }
        }
        string word = get_string("enter the word: ");
        for (int i = 0, j = 0 ; i < strlen(word); i++)
        {
            if ( isalpha( word[i] ) )
            {
                if(isupper(word[i]) )
                {
                    z = (int)word[i] + s[j];

                    if ( z > 90)
                    {
                        z -= 26;
                    }
                    printf("%c",z);
                }
                else if( islower( word[i] ) )
                {
                     z = (int)word[i] + s[j];

                    if ( z > 122)
                    {
                      z -= 26;
                    }
                    printf("%c",z);
               }
                j++;
                if (j == (n))
                     {
                           j = 0;
                     }
            }
            else
            {
                printf("%c",word[i]);
            }
        }
        printf("\n");
    }
    else
    {
        printf ("error eneter the scret code \n");
        return 1;
    }
}
