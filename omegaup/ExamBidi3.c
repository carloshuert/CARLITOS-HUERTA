#include<stdio.h>
int main()
{
    int n;
    int x,y;
    //printf("digite un numero impar");
    scanf("%d",&n);
    char posicion;//espacio dondese guardara si el if se cumple
    for(x=0;x<n;x++)
    {
        if(x%2==0)
        {
         posicion='o';
        }
        else
        {
            posicion='a';
        }
        for(y=0;y<n;y++)
        {
            if(x==y)
            {
                printf("x");
            }
            else
            {
                printf("%c",posicion);
            }
        }
        printf("\n");
    }

    return 0;
}
