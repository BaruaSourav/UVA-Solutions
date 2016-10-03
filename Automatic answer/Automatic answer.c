#include<stdio.h>



int mod(int x)
{
    if(x>=0)
        return x;
    else return -x;
}


int main()
{
    int T,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        int numb,temp,result;
        scanf("%d",&numb);
        temp=((((((numb*567)/9)+7492)*235)/47)-498);
        temp=temp%100;
        result=temp/10;
        printf("%d\n",mod(result));
    }









    return 0;
}
