#include<stdio.h>

int main()
{
    int n,n1;
    int x,suma=0;
    printf("digite la cantidad de numeros a sumar\n");
    scanf("%d",&n);
    for(x=0;x<n;x++)
    {
        scanf("%d",&n1);
        suma=suma+n1;
    }
    printf("%d",suma);
}
