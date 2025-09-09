#include <stdio.h>
#include <stdlib.h>

int maximum(int a, int b) {
    int max;
    if(a > b)
        max=a;
    else if(a < b)
        max=b;
    else
        max=0;
    return max;
}

int main()
{
    int a,b,max;
    printf("Entrer le premier  nombre : ");
    scanf("%d",&a);

    printf("Entrer le deuxieme nombre : ");
    scanf("%d",&b);

    max=maximum(a,b);
    if(max==a)
        printf("\nle premier nombre ( %d ) est plus grand que le deuxieme ( %d )   : %d > %d\n",a,b,a,b);
    else if(max== b)
        printf("\nLe deuxiemme nombre ( %d )est plus grand que la premier ( %d )   : %d < %d\n",b,a,a,b);
    else
        printf("\nLes deux nombre sont egaux : %d = %d \n",a,b);
    return 0;
}
