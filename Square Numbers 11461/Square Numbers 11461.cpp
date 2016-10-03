#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int a,b,i,s_count,check;
    while(cin>>a>>b){

            s_count=0;

            if(a==0&&b==0)
                break;
            for(i=a;i<=b;i++)
                {
                check=sqrt(i);
                if(i==check*check)
                    s_count++;
                }
                cout<<s_count<<endl;
            }
    return 0;
}
