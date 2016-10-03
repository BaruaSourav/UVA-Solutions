#include<iostream>

using namespace std;

int main()
{
    long long int n,i,j;
    int paikhana[1000];
    while(cin>>n)
    {
        if(n<0) break;
        if(n==0)
        cout<<"0";

        i=0;
        while(n!=0)
        {
            //cout<<n%3<<endl;
        paikhana[i]=n%3;
        //cout<<paikhana[i]<<endl;
        n=n/3;
        i++;
        }
        j=i-1;
        for(i=j;i>=0;i--)
            cout<<paikhana[i];
        cout<<endl;








    }
    return 0;
}
