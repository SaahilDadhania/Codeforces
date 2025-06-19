//Way too long words
//Let's consider a word too long, if its length is strictly more than 10 characters. All too long words should be replaced with a special abbreviation.
//This abbreviation is made like this: we write down the first and the last letter of a word and between them we write the number of letters between the first and the last letters. That number is in decimal system and doesn't contain any leading zeroes.
//Thus, "localization" will be spelt as "l10n", and "internationalization» will be spelt as "i18n".
//You are suggested to automatize the process of changing the words with abbreviations. At that all too long words should be replaced by the abbreviation and the words that are not too long should not undergo any changes.
//Input
//The first line contains an integer n (1 ≤ n ≤ 100). Each of the following n lines contains one word. All the words consist of lowercase Latin letters and possess the lengths of from 1 to 100 characters.
//Output
//Print n lines. The i-th line should contain the result of replacing of the i-th word from the input data.

#include <stdio.h>
#include<string.h>

int main (void)
{

    int n;
    
    char word[1000];
    

    printf("Enter n:");
    scanf("%d", &n);

    if (n>=1 && n<=100)
    {
        for(int i=0;i<n;i++)
        {
            scanf("%s", &word);
        
    }

        int s = strlen(word);


        
            if (s>10)
            {
                printf("%c%d%c\n", word[0], s-2, word[s-1]);
            }
            else
            {
                printf("%s\n", word);
            }
    }
        
    
}