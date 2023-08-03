#include<stdio.h> 
 #include<string.h> 
 #include<ctype.h> 
 /* 
   thiNk twIce cODe ONce 
  
   KNIHT eciwt EDOC ecno 
 */ 
 int main() 
 { 
     char *d = "thiNk twIce cODe ONce"; 
     int len = strlen(d); 
     int count = 0; 
     char s[] ="thiNk twIce cODe ONce";
     char scp[]="thiNk twIce cODe ONce";
     
     for (int i = 0; i < len + 1; i++) 
     { 
         if (s[i] == ' ') 
         { 
  
             int z = i - 1; 
             int k; 
             
             for (int j = i - 1; j != -1; j--) 
             { 
                 k = j; 
                 if(s[j] == ' ')
                 {
                     break;
                 }    
             } 
              
             if (count % 2 == 0) 
             { 
                 for (int j = i - 1; j != -1 ; j--) 
                 { 
                     s[k++] = toupper(scp[j]); 
                     if(s[j] == ' ')
                    {
                        break;
                    }  
                 } 
             } 
             else 
             { 
                 for (int j = i - 1; j != -1 ; j--) 
                 { 
                     s[k++] = tolower(scp[j]); 
                    if(s[j] == ' ')
                   {
                        break;
                   }  
                 } 
             } 
             count++;
         } 
     } 
     printf("%s", s);
 }