#include<iostream>
#include<cmath>
#include<cstdio>
#define PI acos(-1.0)
#include<iomanip>

using namespace std;




int main()
{
    int i,t;
    double l,r,w,ar;
    cin>>t;

    for(i=1;i<=t;i++)
    {

        cin>>l;
        r=l/5;
        w=(l*6)/10;
        ar=PI*r*r;
        cout<<fixed<<setprecision(2)<<ar<<" "<<l*w-ar<<endl;


    }

    return 0;
}
