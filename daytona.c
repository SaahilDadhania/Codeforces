#include<stdio.h>

int main()
{
    int testcases;
    int arr[100];
    int n;
    int k;
    
    scanf("%d",&testcases);
    
    for(int i = 0; i < testcases; i++)
    {
        int ksmash = 0;  
        
        scanf("%d",&n);
        scanf("%d",&k);
        
        for(int j = 0; j < n; j++)
        {
            scanf("%d",&arr[j]);
        }
        
        for(int z = 0; z < n; z++)
        {
            if (arr[z] == k)
            {
                ksmash = 1;
                break;  
            }
        }
        
        if (ksmash == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    
    return 0;
}