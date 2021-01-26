#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char word[1001];
    scanf("%[^\n]%*c", word);

    for(int i = 0; i < strlen(word); i++){
        if(word[i] == ' ')
            printf("\n");
        else
            printf("%c", word[i]);
    }
    return 0;
}