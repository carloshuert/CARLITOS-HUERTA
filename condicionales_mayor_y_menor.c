#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    int max;
    int min;

    printf("digita el primer numero\n");
    scanf("%d", &a);

    printf("digita el segundo numero\n");
    scanf("%d", &b);

    printf("digita el tercer numero\n");
    scanf("%d", &c);

    printf("digita el cuarto numero\n");
    scanf("%d", &d);

    if ((a>=b)&&(a>=c)&&(a>=d)&&(a>=a))
    {
        max=a;
    }

    if ((b>=a)&&(b>=c)&&(b>=d)&&(b>=b))
    {
        max=b;
    }

    if ((c>=a)&&(c>=b)&&(c>=d)&&(c>=c))
    {
        max=c;
    }

    if ((d>=a)&&(d>=b)&&(d>=c)&&(d>=d))
    {
        max=d;
    }

    printf("\n\n el numero mayor es= %d\n\n", max);

    if ((a<=b)&&(a<=c)&&(a<=d)&&(a<=a))
    {
        min=a;
    }

    if ((b<=a)&&(b<=c)&&(b<=d)&&(b<=b))
    {
        min=b;
    }

    if ((c<=a)&&(c<=b)&&(c<=d)&&(c<=c))
    {
        min=c;
    }

    if ((d<=a)&&(d<=b)&&(d<=c)&&(d<=d))
    {
        min=d;
    }

    printf("\n el numero menor es= %d\n\n", min);

    return 0;

}
