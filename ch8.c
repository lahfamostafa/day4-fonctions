#include <stdio.h>
#include <stdlib.h>

int est_paire(int a){
    if(a%2 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int a;
    printf("Est ce que le nombre est paire ? ");
    scanf ("%d",&a);

    if(est_paire(a)==1)
        printf("Oui pair");
    else
        printf("Non impaire");
    return 0;
}
