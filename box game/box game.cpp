#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int t,a,c=0;
    cin>>t;
    while(t--)
    {
        cin>>a;
        int player[a];
        for(int i=0;i<a;i++)
            cin>>player[i];

        printf("Case %d: %d\n",++c,player[a/2]);

    }
    return 0;
}
