#include<iostream>
#include<string>

using namespace std;

int main()
{
    int t,i;
    long int fund=0,don;
    string a;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a;
        if(a=="donate")
        {
            cin>>don;
            fund+=don;
        }
        else if(a=="report")
            cout<<fund<<endl;
    }
    return 0;
}
