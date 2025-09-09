#include <stdio.h>
#include <stdlib.h>

long fibonacci(int n){

    if(n<2)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);

}

int main()
{
    int n;
    printf("Entrer un nombre : ");
    scanf("%d",&n);

    printf("\nLe resultet de fibonacci de %d est : %ld",n,fibonacci(n));
    return 0;
}
