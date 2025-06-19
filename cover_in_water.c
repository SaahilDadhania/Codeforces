#include <stdio.h>
#include <string.h>

int main(void) {
    int testcases;
    int n;
    int count;
    char s[1001];  

    scanf("%d", &testcases);  

    for (int i = 0; i < testcases; i++) {
        scanf("%d", &n);  
        scanf("%s", s);   

        if (strstr(s, "...") != NULL) { 
            printf("2\n");
        } else {
            count = 0;
            for (int j = 0; j < n; j++) {
                if (s[j] == '.') {
                    count++;
                }
            }
            printf("%d\n", count);
        }
    }

    
}