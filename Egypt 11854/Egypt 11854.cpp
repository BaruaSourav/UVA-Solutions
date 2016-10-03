#include<iostream>

using namespace std;

int main()
{
    int x,y,z;
    while(cin>>x>>y>>z)
    {
        if(x==0&&y==0&&z==0) break;

        else if(((x*x)==((y*y)+(z*z)))||((y*y)==((x*x)+(z*z)))||((z*z)==((y*y)+(x*x))))
            cout<<"right"<<endl;
        else cout<<"wrong"<<endl;
    }

    return 0;




}




