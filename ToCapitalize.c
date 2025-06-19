#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char array[1000];
    scanf("%s", array);
    
    
    array[0] = toupper(array[0]);
    printf("%s",array);
    
}