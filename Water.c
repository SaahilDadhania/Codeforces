#include<stdio.h>

int main(void)

{
    char a[100];
    int testcases;
    int n;
    int count =0;
    scanf("%d",&testcases);
    scanf("%s",n);

    for(int i=0;i<n;i++)
    {
        scanf("%s",a);
    
    for (int j=0;j<strlen(a);j++)
    {
        if (a[j]=='.')
        {
            break;

        }
        else if (a[j-1]=='.' && a[j+1]=='.')
        {
            a[j] = '#';
            
        }
        
        else if (a[j] == '#')
        {
            a[j]== '.';
            count++;
        }


}