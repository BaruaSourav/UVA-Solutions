#include<iostream>
#include<cmath>
#include <algorithm>

using namespace std;

int main()
{
    int a,b,c;

    while(cin>>a>>b)
    {
        if(a==-1 && b==-1) break;
        c=abs(a-b);
        if(c>50)
            c=(100-max(a,b))+min(a,b);
        cout<<c<<endl;
    }




    return 0;
}
