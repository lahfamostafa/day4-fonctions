#include <stdio.h>
#include <stdlib.h>

int produit(int a, int b){
    return a * b ;
}

int main()
{
    int a,b;
    printf("Entrer le premier  nombre : ");
    scanf("%d",&a);

    printf("Entrer le deuxieme nombre : ");
    scanf("%d",&b);

    printf("\nLe produit est : %d\n",produit(a,b));
    return 0;
}
