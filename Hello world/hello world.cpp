#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;

int main()
{
    int n,i=1,cn=0;
    bool paisi=false;


    while(cin>>n)
        {
            if(n<0) break;

            while(!paisi)
                {
                    if (n==1||n==0)
                    {
                       paisi=true;
                        i=0;
                        printf("Case %d: %d\n",++cn,i);
                    }
                    else if(n==2)
                    {
                       paisi=true;
                        i=1;
                        printf("Case %d: %d\n",++cn,i);
                    }
                    else if((pow(2,i)<n)&&(n<=pow(2,i+1)))
                    {
                                paisi=true;
                                printf("Case %d: %d\n",++cn,i+1);
                    }

                    else i++;

        }

        i=0;
        paisi=false;
        }

    return 0;
}
