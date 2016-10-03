
#include<iostream>

using namespace std;

void show_binary(int j,int i,int array[1000])
{
    for(i=j;i>=0;i--)
        {
            cout<<array[i];
        }
}

int main()
{
    long long int b;
    int count,i,j,paikhana[1000];
    while(cin>>b)
    {
        if(b==0) break;

        i=0;
        count=0;

        while(b!=0)
        {
            //cout<<n%3<<endl;
        paikhana[i]=b%2;

        //cout<<paikhana[i]<<endl;
        b=b/2;
        i++;
        }
        j=i-1;
        for(i=j;i>=0;i--)
        {
            //cout<<paikhana[i];
            if(paikhana[i]==1) count++;
        }


        cout<<"The parity of ";
        show_binary(j,i,paikhana);
        cout<<" is "<<count<<" (mod 2)."<<endl;









    }
    return 0;
}
