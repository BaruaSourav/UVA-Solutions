#include<iostream>
#include<cstdio>

using namespace std;


int main()
{
    int n,tempn;
    while(cin>>n)
        {
            if(n==0) break;
            tempn=0;

            while(n>=3)
                {
                    tempn=tempn+(n/3);
                    n=(n/3)+(n%3);

                }
                if (n==2) tempn++;
            cout<<tempn<<endl;
        }
        return 0;
}
