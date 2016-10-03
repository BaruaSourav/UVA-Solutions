#include<stdio.h>

int main()
{
    int n,k,tempn;
    while(((scanf("%d%d",&n,&k))==2&&(k>1)))
    {

        tempn=n;





    while(n>=k)
        {
            tempn=tempn+(n/k);
            n=(n/k)+(n%k);

        }

        printf("%d\n",tempn);


    }
    return 0;



}
