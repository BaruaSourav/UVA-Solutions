#include<iostream>


using namespace std;

int main()
{
    int T,i;
    cin>>T;
    for(i=1;i<=T;i++)
        {   int a,b;
            cin>>a>>b;
            if(a<b)
                cout<<"<"<<endl;
            else if(a>b)
                cout<<">"<<endl;
            else if(a==b)
                cout<<"="<<endl;
        }
    return 0;
    }


