#include<iostream>
#include<cstdio>

using namespace std;


int max(int a,int b,int c)
{
    int big;
    if(a>b&&a>c)
        big=a;
    else if(b>c&&b>a)
        big=b;
    else big=c;
    return big;

}


int main()
{
    int t,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        {
           if(max(x,y,z)==x)
            {
                if(x<y+z)
                    printf("OK");

                else printf("Wrong!!");
            }
            else if(max(x,y,z)==y)
            {
                if(y<x+z)
                    printf("OK");

                else printf("Wrong!!");
            }
       else
       {
                if(z<y+x)
                    printf("OK");

                else printf("Wrong!!");
       }
    printf("\n");
        }
    }

    return 0;
}
