#include<stdio.h>
#include<string.h>
int main()
{
    char *s ="hello wOrld";
    int count[26] = {0};
    int length = strlen(s);
    for(int i = 0; i < length + 1; i++)
    {
        if (s[i] >= 65 && s[i] <=90 )
        {
            count[s[i] - 65]++;
        }
        else if (s[i] >= 97 && s[i] <=122 )
        {
            count[s[i] - 97]++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if(count[i] > 1)
        {
            printf("%c --> %d\n", i + 97, count[i]);
        }
    }
    
}