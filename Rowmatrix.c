#include <stdio.h>

int main(void)
{
    char array[5][5];
    int f = -1;
    int g = -1;
    int count =0;


    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%s", &array[i][j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (array[i][j] == '1')
            {
                
                f = i+1;
                g = j+1;


            }
        }
    }
    if (f == 5 || f == 1)
    {
        count++;
        count++;
    }
    if (f == 4 || f ==2)
    {
        count++;
    }
    
    if (g == 5 || g ==1)
    {
        count++;
        count++;
    }
    
    if (g == 4 || g ==2)
    {
        count++;
    }
    printf ("%d",count);
}