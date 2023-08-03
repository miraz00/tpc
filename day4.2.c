#include<stdio.h>
#include<ctype.h>
#include<string.h>
// malayalam is a malayalam
// malayalam a malayalam
int palindrome(char w[])
{
    int len = strlen(w);
    for(int i = 0, j = len - 1; ;i++, j--)
    {
        if(i == j)
        {
            return 1;
        }
        else if (w[i] != w[j])
        {
            return 0;
        }
        if (len % 2 == 0)
        {
            if(i - j == 1)
            {
                return 1;
            }
        }
    }
}

int main()
{
    char w[] = "malayalam is a malayalam nibin hello miaaim";
    int len = strlen(w);
    char s[100];
    int k = 0;
    for (int i = 0; i < len + 1; i++)
    {
        if (w[i] == ' ' || i == len)
        {
            s[k] = '\0';
            if (palindrome(s))
            {
                printf("%s ", s);
            }
            k = 0;
            continue;
        }
        s[k++] = w[i];
    }
}
