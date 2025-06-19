#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n;
        scanf("%lld", &n);

        
        if (n < 4 || (n & 1)) {
            printf("-1\n");
            continue;
        }

        
        long long mn = n / 6;
        long long r = n % 6;
        if (r == 2) {
            
            mn = mn - 1 + 2;
        } else if (r == 4) {
            
            mn = mn + 1;
        }
        
        long long mx = n / 4;
        r = n % 4;
        if (r == 2) {
           
            mx = (n - 6) / 4 + 1;
        }
        

        printf("%lld %lld\n", mn, mx);
    }
    return 0;
}