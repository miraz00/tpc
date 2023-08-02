#include<stdio.h>
#include<string.h>
#include<ctype.h>
/*
  thiNk twIce cODe ONce

  KNIHT eciwt EDOC ecno
*/
int main()
{
    char *s = "thiNk twIce cODe ONce";
    *s = 'i';
    printf("%s", s);
    return 0;
    int len = strlen(s);
    int count = 0;
    for (int i = 0; i < len + 1; i++)
    {
        if (s[i] == ' ')
        {
            
            int z = i - 1;
            int k;
            
            for (int j = i - 1; j != -1 || s[j] == ' ' ; j--)
            {
                k = j;
            }

            if (count % 2 == 0)
            {
                for (int j = i - 1; j != -1 || s[j] == ' ' ; j--)
                {
                    s[k++] = toupper(s[j]);
                }
            }
            else
            {
                for (int j = i - 1; j != -1 || s[j] == ' ' ; j--)
                {
                    s[k++] = tolower(s[j]);
                }
            }
            count++;
        }
    }
    
}