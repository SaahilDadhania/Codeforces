#include<stdio.h>

int main(void) {

    int n;
    int k;
    int count = 0;
    
    scanf ("%d %d", &n, &k);
    char marks[n];
    if (n <=50 && k <= 50){
    for (int i = 0; i < n; i++) {
        scanf(" %d", &marks[i]);
        

        
       
    }  
    int cutoff = marks[ k-1];
     

        
        for (int i = 0; i < n; i++) {
            if (marks[i] >= cutoff && marks[i] > 0) {
                count++;
            }
        }
    
    }printf("%d\n", count);
    }

 