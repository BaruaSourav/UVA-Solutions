
#include<cstdio>
#include<iostream>
using namespace std;






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
    cin>>T;
    for(i=1;i<=T;i++)
    {
       cin>>n;

       if(n<=9)
        temp=n*n;
       else temp=n;
       if(happy(temp)==1)
        printf("Case #%d: %lld is a Happy number.\n",i,n);

       else printf("Case #%d: %lld is an Unhappy number.\n",i,n);

    }
    return 0;
}
