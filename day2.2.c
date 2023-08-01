#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10] = {2, 0, 1, 4, 4, 6, 4, 1, 56, 0};
    int c[10];
    int k = 0;
    int count = 1;
    for(int i = 0;i < 10;i++)
    {
        if (k == 0)
        {
            for(int j = (i + 1)  % 10;j != i;j = (j + 1)  % 10)
            {
                if(a[i] == a[j])
                {
                    count += 1;
                }
            }
        }
        for(int z = 0; z < k; z++)
        {
            if(a[i] == c[z])
            {
                break;
            }
        
            if(z == k - 1)
            {
                for(int j = (i + 1)  % 10;j != i;j = (j + 1)  % 10)
                {
                    if(a[i] == a[j])
                    {
                        count += 1;
                    }
                }
            }    
            
        }
            
        
        if (count > 1)
        {
            printf("%d-->%d\n", a[i], count);
            c[k++] = a[i];
        }
        count = 1;
    }
}