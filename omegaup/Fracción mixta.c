#include<stdio.h>
int main()
{
    int n,m;
    int div1;
    int res;
    scanf("%d %d",&n ,&m);
    div1=n/m;
    res=n%m;
    if(res==0)
    {
        printf("%d",div1);
    }
    else if(div1==0)
    {
        printf("%d/%d",div1);
    }
    else
    {
    printf("%d %d/%d",div1,res,m);
    }


    return 0;
}
