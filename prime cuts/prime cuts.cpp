#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;
bool* sieve(int n)
{
    int i,k;
    bool * prime = new bool[n+1];
    while(i<=n+1)
    {
        prime[i]=true;
        i++;
    }
    prime[0]=false;
    prime[1]=false;
    int m=sqrt(n);
    for(i=2;i<=m;i++)
    {
        if (prime[i])
        {
            for(k=i*i;i<=n;k+=i)
                prime[k]=false;
        }
    }

return prime;
}


int main()
{
    bool *x;
    x=sieve(10);
    for(int i=0;i<=10;i++)
    {
        if (x[i]==true)
            cout<<i<<endl;
    }
}
