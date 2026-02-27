#include <stdio.h>

int main()
{
    char input[100];
    int freq[26] = {0};
    int distinct = 0;

    scanf("%s", input);

    for(int i = 0; input[i] != '\0'; i++)
    {
        if(freq[input[i] - 'a'] == 0)
            distinct++;
        freq[input[i] - 'a']++;
    }

    if(distinct % 2 == 0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");

    return 0;
}