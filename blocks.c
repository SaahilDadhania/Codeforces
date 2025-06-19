#include <stdio.h>

int main(void)
{
    int m;
    int n;
    scanf("%d %d", &m, &n);
    int blocks = m*n;
    if (  blocks%2==0)
    {
        printf("%d",blocks/2);
    }
    if ( blocks%2!=0)
    {
        printf ("%d",(blocks-1)/2);
    }
}