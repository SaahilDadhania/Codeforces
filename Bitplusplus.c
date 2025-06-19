#include <stdio.h>
#include <string.h> 

int main(void) {
    int count = 0;
    char operation[150][4]; 
    char *naimish[] = {"X++", "++X"}; 
    char *naimish1[] = { "X--", "--X"}; 

    int n;
    scanf("%d", &n);
    
    if (n<=150)
    {
    
    for (int i = 0; i < n; i++) {
        scanf("%s", operation[i]); 

        for (int j = 0; j < 2; j++) {
            if (strcmp(operation[i], naimish[j]) == 0) { 
                count++;
                break; 
            }
        }
        for (int j = 0; j < 2; j++) {
            if (strcmp(operation[i], naimish1[j]) == 0) { 
                count--;
                break;
            }
        }
    }
    
    printf("%d\n", count); 
    return 0;
}}