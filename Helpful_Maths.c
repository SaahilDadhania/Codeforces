#include <stdio.h>
#include <string.h>

int main(void)

{
    char a[100];
    scanf("%s",&a);

    int length = strlen(a);
    int temp;


    for (int i=0;i<length-1;i++)
    {
        if (a[i]== 'a')
        {
            break;
        }
        for (int j=i+1;j<length;j++)
        {
            
            
            if (a[j]== '+')
            {
                a[j] = '+';
            }
            
            else if  (a[i]>a[j] )
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                
                
            }
            
           
        }
    }
    printf("%s",a);
    
    

    


}