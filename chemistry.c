#include <stdio.h>

int main() {
    int testcases;
    scanf("%d", &testcases); 

    
    for (int i = 0; i < testcases; i++) {
        int n;
        int k;
        char s[100000];
        int char_count[26]; 

        scanf("%d %d", &n, &k); 
        scanf("%s", s); 

        
        for (int i = 0; i < 26; i++) {
            char_count[i] = 0;
        }

        
        for (int i = 0; i < n; i++) {
            char_count[s[i] - 'a']++;
        }

        
        int odd_count = 0;
        for (int i = 0; i < 26; i++) {
            if (char_count[i] % 2 != 0) {
                odd_count++;
            }
        }

        int p = odd_count - k; 

        
        int remaining_length = n - k;

        
        
        

        
        if (p <=1) {
            printf("YES\n");
        } 
         
        else {
            printf("NO\n");
        }

    }
    
}

// 5 0
// ebada