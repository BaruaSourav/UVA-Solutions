#include<stdio.h>


int main()
{
    int a,b,result;

    while(scanf("%d%d",&a,&b)!=EOF)
    {
        result=(a*b)-1;
        printf("%d\n",result);
    }

    return 0;
}

