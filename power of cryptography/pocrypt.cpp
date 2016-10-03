#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main()
{
    double n,p,k;
    while(cin>>n>>p)
    {

        n=1/n;
        k=pow(p,n);
        printf("%.0lf\n",k);
    }
    return 0;
}
