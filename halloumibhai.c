#include <stdio.h>


void boobsort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                //  arr[j] ane arr[j+1]ma adlabadli karo
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to check if the array can be sorted with k = 1
int solve(int a[], int n, int k) {
    // If k == 1, the array must already be sorted
    if (k == 1) {
        // Make a copy of the original array
        int copy[n];
        for (int i = 0; i < n; i++) {
            copy[i] = a[i];
        }

        // Sort the copy of the array
        boobsort(copy, n);

        // Compare the sorted copy with the original array
        for (int i = 0; i < n; i++) {
            if (copy[i] != a[i]) {
                printf("NO"); // Arrays are not the same, return false (NO)
            }
        }
    }

    printf("YES"); // Return true (YES) if sorted or k != 1
}

int main() {
    int t;
    scanf("%d", &t); // Number of test cases

    for (int saahil = 0; saahil < t; saahil++) {
        int n, k;
        scanf("%d %d", &n, &k); // Read n and k

        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]); // Read array elements
        }

        if (solve(a, n, k)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}