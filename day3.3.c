#include<stdio.h>
#include<string.h>
#include<ctype.h>
/*
thiNk twIce cODe ONce

KNIHT eciwt EDOC ecno
*/
int main()
{
 char *d = "thiNk twIce cODe ONce"; //constant string literal
 int len = strlen(d);
 int count = 0;
 char s[] ="thiNk twIce cODe ONce";
 char scp[]="thiNk twIce cODe ONce";
 printf("%s\n", s);
 for (int i = 0; i < len + 1; i++)
 {
     if (s[i] == ' ' || i == len)
     {

         int z = i - 1;
         int k;

         for (int j = i - 1; j != -1; j--)
         {
             if(s[j] == ' ')
             {
                 break;
             }
             k = j;
         }

         if (count % 2 == 0)
         {
             for (int j = i - 1; j != -1 ; j--)
             {
                 if(s[j] == ' ')
                 {
                     break;
                 }
                 s[k++] = toupper(scp[j]);
             }
         }
         else
         {
             for (int j = i - 1; j != -1 ; j--)
             {
                 if(s[j] == ' ')
                 {
                     break;
                 }
                 s[k++] = tolower(scp[j]);
             }
         }
         count++;
     }
 }
 printf("%s", s);
}
