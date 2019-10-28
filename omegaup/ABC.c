#include<stdio.h>
#include<string.h>
int main()
{
    int x;
    int arreglo[3];
    int n=3;
    //digitar los 3 numeros
    for(x=0;x<3;x++)
    {
        scanf("%d",&arreglo[x]);

    }
    //ordenar los numeros
    int y;
    for(x=0;x<n;x++)
    {
        for(y=0;y<n-1;y++)
        {
            if(arreglo[y]>arreglo[y+1])
            {
                int aux=arreglo[y];
                arreglo[y]=arreglo[y+1];
                arreglo[y+1]=aux;
            }
        }
    }
    //PEDIR ORDEN Y MOSTRARLO;
    printf("\n");
    char orden[n];
    for(x=0;x<n;x++)
    {
         scanf("%s",&orden[x]);
    }
    if(orden[0]=='C'&&orden[1]=='B'&&orden[2]=='A')
      {
             printf("%d %d %d\n",arreglo[2],arreglo[1],arreglo[0]);
      }
    if(orden[0]=='B'&&orden[1]=='A'&&orden[2]=='C')
      {
             printf("%d %d %d\n",arreglo[1],arreglo[0],arreglo[2]);
      }
    if(orden[0]=='A'&&orden[1]=='B'&&orden[2]=='C')
      {
             printf("%d %d %d\n",arreglo[0],arreglo[1],arreglo[2]);
      }
    if(orden[0]=='A'&&orden[1]=='C'&&orden[2]=='B')
      {
             printf("%d %d %d\n",arreglo[0],arreglo[2],arreglo[1]);
      }
    if(orden[0]=='B'&&orden[1]=='C'&&orden[2]=='A')
      {
             printf("%d %d %d\n",arreglo[1],arreglo[2],arreglo[0]);
      }
    if (orden[0]=='C'&&orden[1]=='A'&&orden[2]=='B')
      {
             printf("%d %d %d\n",arreglo[2],arreglo[0],arreglo[1]);
      }


    return 0;
}

