#include<iostream>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    int a,b,c;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>c;
        if((a>20)||(b>20)||(c>20))
            cout<<"Case "<<i<<": "<<"bad"<<endl;
        else cout<<"Case "<<i<<": "<<"good"<<endl;

    }
    return 0;

}
