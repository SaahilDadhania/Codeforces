#include <stdio.h>

int main(void)
{
    int testcases;
    scanf("%d", &testcases);
    int khokhu[17]; 

    for (int i = 0; i < testcases; i++)
    {
        int permute;
        scanf("%d", &permute);

        
        for (int j = 0; j < permute; j++)
        {
            scanf("%d", &khokhu[j]);
        }

        
        while (1)
        {
            int changed = 0;
            for (int k = 1; k < permute - 1; k++)
            {
                if (khokhu[k - 1] < khokhu[k] && khokhu[k] > khokhu[k + 1])
                {
                    
                    int temp = khokhu[k];
                    khokhu[k] = khokhu[k + 1];
                    khokhu[k + 1] = temp;
                    changed = 1;
                }
            }
            if (changed == 0)
                break;
        }

        
        int sorted = 1;
        for (int j = 0; j < permute - 1; j++)
        {
            if (khokhu[j] > khokhu[j + 1])
            {
                sorted = 0;
                break;
            }
        }

        if (sorted)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    
}
