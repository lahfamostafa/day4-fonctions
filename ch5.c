#include <stdio.h>
#include <stdlib.h>

long factorielle(int n){
    if(n==0 || n==1)
        return 1;
    else
        return n * factorielle(n - 1);

}

int main()
{
    int n;
    printf("Entrer un nombre : ");
    scanf ("%d",&n);

    printf("%d",factorielle(n));
    return 0;
}
