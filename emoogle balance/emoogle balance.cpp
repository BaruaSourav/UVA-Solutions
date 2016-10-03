#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    int cases,i;
    int no=0,zero=0,other=0;
    while(cin>>cases)
    {
        if (cases==0) break;
        int numb[cases];
        for(i=0;i<cases;i++)
           {
               cin>>numb[i];
               if(numb[i]==0) zero++;
               else other++;
           }
        cout<<"Case "<<++no<<": "<<other-zero<<endl;
        other=0,zero=0;
    }
    return 0;
}
