#include <stdio.h>


void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void solve() {
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    if (n == 2) {  
        printf("Yes\n");
        return;
    }

    bubble_sort(a, n); 

    
    int expected_sum = a[0] + a[1];

    for (int i = 1; i < n - 1; i++) {
        if (a[i] + a[i + 1] != expected_sum) {
            printf("No\n");
            return;
        }
    }

    printf("Yes\n");
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        solve();
    }

    return 0;
}