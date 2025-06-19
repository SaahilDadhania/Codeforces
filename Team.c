#include<stdio.h>

int main(void)
{
int count=0;



    int n;
    scanf("%d", &n);
    int array[n][3];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    
    for ( int i=0;i<n;i++)
    {
    
            if (array[i][0]==1 && array [i][1] ==1 || array[i][1]==1 && array [i][2] ==1 || array[i][0]==1 && array [i][2] ==1)
            {
                count++;
            }
            
            // if (array[i][0]==1 && array [i][1] ==1 || array[i][1]==1 && array [i][2] ==1 || array[i][0]==1 && array [i][2] ==1)
            // {
            //     count++;
            // }
            // if (array[i][0]==1 && array [i][1] ==1 || array[i][1]==1 && array [i][2] ==1 || array[i][0]==1 && array [i][2] ==1)
            // {
            //     count++;
            // }
    }
            
            printf("%d",count);
    
}