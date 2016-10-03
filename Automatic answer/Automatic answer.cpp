#include<iostream>
//#include<algorithm>

using namespace std;
int main()
{
    int t,i,temp,numb;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>numb;
        temp=((((((numb*567)/9)+7492)*235)/47)-498);
        temp=temp/10;
        temp=temp%10;
        if(temp<0) cout<<-temp<<endl;
        else if (temp>=0) cout<<temp<<endl;

        //cout<<abs(temp)<<endl;
    }
    return 0;
}
