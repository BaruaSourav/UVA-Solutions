#include<stdio.h>

int main()
{
    int T,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        int a,b,k,sum=0;
        scanf("%d",&a);
        scanf("%d",&b);
        for(k=a;k<=b;k++)
        {
            if(k%2!=0)
            {
                sum+=k;
            }
        }
        printf("Case %d: %d\n",i,sum);
    }

    return 0;
}
