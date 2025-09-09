#include <stdio.h>
#include <stdlib.h>

int Somme(int a,int b){

    return a + b;
}

int main()
{
    int a,b;
    printf("Entrer le  premier  nombre : ");
    scanf ("%d",&a);

    printf("Entrer le deuximeme nombre : ");
    scanf("%d",&b);

    printf("\nLa somme est : %d\n",Somme(a,b));
    return 0;
}
