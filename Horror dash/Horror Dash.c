#include<stdio.h>


int main()
{
    int T,i,j;
    scanf("%d",&T);
    for(j=1;j<=T;j++)
    {
         int n,maxi=0;

         scanf("%d",&n);
         int arr[n];
         for(i=0;i<n;i++)
            scanf("%d",&arr[i]);

         for(i=0;i<n;i++)
         {
             if(maxi<arr[i])
                maxi=arr[i];
         }

         printf("Case %d: %d\n",j,maxi);

    }


 return 0;
}
