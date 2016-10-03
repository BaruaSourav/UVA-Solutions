#include<iostream>

using namespace std;
int anda=0;
int process(long long int x)
{

    anda+=x%10;
    x=x/10;
    if((x==0)&&(anda<10)) return anda;
    if((x==0)&& (anda>=10))
    {
        x=anda;
        anda=0;
        return process(x);
    }
    else return process(x);
}


int main()
{
    long long int a;
    while(cin>>a)
    {
        if(a==0) break;
        cout<<process(a)<<endl;
        anda=0;
    }
}
