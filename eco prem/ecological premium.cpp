#include<iostream>

using namespace std;

int main()
{
    int t,f,a,b,c,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>f;
        while(f--)
        {
            cin>>a>>b>>c;
            sum=sum+(a*c);
        }
        cout<<sum<<endl;
        sum=0;


    }
    return 0;
}
