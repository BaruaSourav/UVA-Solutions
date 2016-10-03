
#include<stdio.h>
#include<string.h>



int main()
{
    int T,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        int wall,k,f,high,low;
        high=low=0;
        scanf("%d",&wall);
        int arr[wall];
        for(f=0;f<wall;f++)
            scanf("%d",&arr[f]);

        for(k=0;k<wall-1;k++)
        {
            if(arr[k]<arr[k+1])
                high++;
            else if(arr[k]>arr[k+1])
                low ++;
        }

        printf("Case %d: %d %d\n",i,high,low);

    }



    return 0;
}
