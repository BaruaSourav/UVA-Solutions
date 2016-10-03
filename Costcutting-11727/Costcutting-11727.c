#include<stdio.h>

int main()
{
    int T,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        int a,b,c,mid;
        scanf("%d%d%d",&a,&b,&c);

        if(((a>b&&b>c)||(c>b&&b>a)))
            mid=b;
        else if(((b>a&&a>c)||(c>a&&a>b)))
            mid=a;
        else if(((a>c&&c>b)||(b>c&&c>a)))
            mid=c;

        printf("Case %d: %d\n",i,mid);
    }


return 0;
}
