#include<stdio.h>
int main()
{
    int n = 5;

    for (int i = 0; i < 5; i++)
    {

        if(i == 0 || i == 5 - 1)
        {
            for (int j = 0; j < 5; j++)
            {
                printf("* ");
            }
        }
        else
        {
            for (int j = 0; j < 2; j++)
            {
                printf("*       ");
            }
        }
        printf("\n");

    }
}
