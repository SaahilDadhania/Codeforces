#include<stdio.h>

int main(void)

{
    int swaps;
    int testcases;
    int n;
    char arr[100];
    int count;


    scanf("%d", &testcases);
    if (testcases >= 1 && testcases <= 100)
    {
        for (int h = 0; h < testcases; h++)
        {

        

        scanf("%d %d", &n, &swaps);
        if (n <=100 && swaps<=100)
        for (int i =0; i<n;i++)
        {
            scanf("%d", &arr[i]);
        }
       
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    swaps--;
                    count++;
                }
                if (swaps == 0)
                {
                    break;
                }
            }
            if (swaps == 0)
            {
                break;
            }
            if (count <= swaps)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        }
        
       
        
        
        
        
        
        }
    }

}