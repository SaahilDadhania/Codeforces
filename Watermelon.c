#include <stdio.h>

int main(void)
{
    int w;
    scanf("%d", &w);

    if (w >= 1 && w <= 100)
    {
        if (w==2)
        {
            printf("no");
        }
        else if (w%2==0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    
    
}