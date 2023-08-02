#include<stdio.h>
#include<string.h>

int main()
{
    char *s1 = "abcdabc";
    char *s2 = "cadbcad";
    int s1size = strlen(s1);
    int s2size = strlen(s2);

    if(s1size != s2size)
    {
        printf("Not Isomorphic");
        return 0;
    }

    for (int i = 0; i < s1size + 1; i++)
    {
        for (int j = i + 1; j < s1size + 1; j++)
        {
            if (s1[i] == s1[j])
            {
                if (s2[i] != s2[j])
                {
                    printf("Not Isomorphic");
                    return 0;
                }
            }
            else
            {
                if (s2[i] == s2[j])
                {
                    printf("Not Isomorphic");
                    return 0;
                }
            }

        }
    }

    printf("Isomorphic");
    
}