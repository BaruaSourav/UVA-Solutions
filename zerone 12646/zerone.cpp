#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    char ans;
    while(cin>>a>>b>>c)
    {
        if((b==0&&c==0&&a==1)||(a==0&&b==1&&c==1))
        {
            ans='A';
        }
        else if((a==0&&c==0&&b==1)||(b==0&&a==1&&c==1))
        {
            ans = 'B';
        }
        else if((a==0&&b==0&&c==1)||(a==1&&b==1&&c==0))
        {
            ans = 'C';
        }
        else if ((a==b&&c==b))
            ans='*';

        cout<<ans<<endl;

    }
    return 0;


}
