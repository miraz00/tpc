/*
5
1 2 3 4 5
r 2

4 5 1 2 3
*/

#include<stdio.h>
int main()
{
    int n, r;
    printf("enter size:");
    scanf("%d", &n);
    int a[10];
    printf("enter array: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("no of right rotations: ");
    scanf("%d", &r);

    for (int i = 0; i < r; i++)
    {
        int temp1 = a[0];
        for (int j = 0; j < n; j++)
        {
            int temp2 = a[(j+1) % n];
            a[(j + 1) % n] = temp1;
            temp1 = temp2;
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
}