#include<stdio.h>
#include<string.h>


int main(void){

    char array1[100], array2[100];

    scanf("%s", array1);
    scanf("%s", array2);
    
    int result = strcasecmp(array1, array2);

    

    if (result==0){
        printf("0");
    } else if (result >0){
        printf("1");
    } else {
        printf("-1");
    }

}