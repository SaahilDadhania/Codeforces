#include<stdio.h>

int main(void)

{
    int limak;
    int bob;
    int years = 0;
    scanf("%d %d", &limak, &bob);
    while (limak <= bob)
    {
        limak *= 3;
        bob *= 2;
        years++;
    }
    printf("%d\n", years);
    
}