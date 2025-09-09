#include <stdio.h>
#include <stdlib.h>

int minimum(int a ,int b){
    int min;
    if(a<b)
        min = b;
    else if(a>b)
        min = a;
    else
        min = 0;
    return min;
}

int main()
{
    int a,b,min;
    printf("Entrer le premier  nombre : ");
    scanf("%d",&a);

    printf("Entrer le deuxieme nombre : ");
    scanf("%d",&b);

    min=minimum(a,b);

    if(min==a)
        printf("\nLe premier nombre ( %d ) est plus grand que le deuxieme ( %d ) : %d > %d\n",a,b,a,b);
    else if(min==b)
        printf("\nLe deuxemme nombre ( %d ) est plus grand que le premier ( %d ) : %d < %d\n",b,a,a,b);
    else
        printf("\nLes deux nombres sont egaux %d = %d",a,b);


    return 0;
}
