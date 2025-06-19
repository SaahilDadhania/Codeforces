#include <stdio.h>

int main(void) {
    int testcases;
    scanf("%d", &testcases); 

    for (int i = 0; i < testcases; i++) {
        int n;
        int k;
        char s[10000];
        int char_count[26]; 

        scanf("%d %d", &n, &k); 
        scanf("%s", s); 

        // Initialize character count array
        for (int i = 0; i < 26; i++) {
            char_count[i] = 0;
        }

        // Count frequency of each character
        for (int i = 0; i < n; i++) {
            char_count[s[i] - 'a']++;
        }

        // Count how many characters have odd frequencies
        int odd_count = 0;
        for (int i = 0; i < 26; i++) {
            if (char_count[i] % 2 != 0) {
                odd_count++;
            }
        }

        // Special handling when k = 0
        if (k == 0) {
            if (odd_count <= 1) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
            continue; // Move to the next test case
        }

        int remaining_length = n - k;

        // Main logic for k > 0 cases
        if (odd_count <= remaining_length && (remaining_length % 2 != 0 || odd_count % 2 != 0)) {
            printf("YES\n");
        } else if (odd_count - k <= 0) {
            printf("YES\n");
        } else if (remaining_length == 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    
}