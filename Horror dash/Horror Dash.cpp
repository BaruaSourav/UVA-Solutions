
#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int T,i,j;
    cin>>T;
    for(j=1;j<=T;j++)
    {
         int n,maxi=0;

         cin>>n;
         int arr[n];
         for(i=0;i<n;i++)
         {
            cin>>arr[i];
             if(maxi<arr[i])
                maxi=arr[i];
         }


         printf("Case %d: %d\n",j,maxi);

    }


 return 0;
}

