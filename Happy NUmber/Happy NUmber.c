#include<stdio.h>






long long int happy(long long int n)
{
    long long s=0;
    if(n<=9)
        return n;
    while(n!=0)
    {

        s+=((n%10)*(n%10));
        n/=10;
    }
    happy(s);
}

int main()
{
    long long int n,temp;
    int T,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
       scanf("%lld",&n);

       if(n<=9) n=n*n;
       if(happy(n)==1)
        printf("Case #%d: %lld is a Happy number.\n",i,n);

       else printf("Case #%d: %lld is an Unhappy number.\n",i,n);

    }
    return 0;
}
