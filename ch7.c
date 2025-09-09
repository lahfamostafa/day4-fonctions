#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void invChanie(char str[]){
    int i,j;
    char mot[]="Mostafa", inverse[7];

    for(i=0 ; i < strlen(mot) ; i++){
        for (j=10 ; j > 0 ; j--){
            inverse[j]=mot[i];
        }
    }
}

int main()
{
    int str[7];
    printf("\n le mot inverse est : %c",invChanie(str[]));
    return 0;
}
