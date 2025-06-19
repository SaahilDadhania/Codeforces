#include <stdio.h>

// function to convert integer to bits by using for loops
void intToBits(int n)
{
    for (int i = 31; i >= 0; i--)
    {
        int k = n >> i;
        if (k & 1)
            printf("1");
        else
            printf("0");
    }
}


int checkZero(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] != 0)
        {
            return 0;
        }
    }
    return 1;
}


int performXOR(int arr[], int length)
{
    int result = 0;
    for (int i = 0; i < length; i++)
    {
        result = result ^ arr[i];
    }
    return result;
}

int main(void)
{
    int testcases;
    int length;
    int arr[1000];

    
    scanf("%d", &testcases);
    scanf("%d",&length);

    for(int i=0;i<length;i++)
    {
        scanf("%d",&arr[i]);
    }

    /
    for (int i = 0; i < 8; i++)
    {
        if (checkZero(arr, length))
        {
            printf("YES\n");
            return 0;
        }
        int result = performXOR(arr, length);
        if (result == 0)
        {
            printf("YES\n");
            return 0;
        }
        for (int j = 0; j < length; j++)
        {
            arr[j] = arr[j] ^ result;
        }
    }
    
}