#include<iostream>

using namespace std;

int main()
{
    int t,i;
    long int a,b,c;
    cin>>t;

    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>c;

        if((a+b<=c)||(b+c<=a)||(c+a<=b)) cout<<"Case "<<i<<": Invalid"<<endl;
        else if(a<=0||b<=0||c<=0) cout<<"Case "<<i<<": Invalid"<<endl;
        else if (a==b&&b==c&&c==a) cout<<"Case "<<i<<": Equilateral"<<endl;
        else if(a==b || b==c || c==a) cout<<"Case "<<i<<": Isosceles"<<endl;
       else if(a!=b && b!=c && c!=a) cout<<"Case "<<i<<": "<<"Scalene"<<endl;
    }
    return 0;
}
