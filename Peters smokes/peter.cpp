#include<iostream>


using namespace std;

int main()
{
    int n,k,tempn;
    while((cin>>n>>k)&&(k>1))
        {
            tempn=n;

            while(n>=k)
                {
                    tempn=tempn+(n/k);
                    n=(n/k)+(n%k);
                }
            cout<<tempn<<endl;
        }
        return 0;
}
