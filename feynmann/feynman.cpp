#include<iostream>

using namespace std;

int main()
{
    int i;
    long long int z,result=0;
    while(cin>>z)
    {
        if(z==0) break;
        for(i=1;i<=z;i++)
            result+=i*i;
        cout<<result<<endl;
        result=0;
    }
    return 0;
}
