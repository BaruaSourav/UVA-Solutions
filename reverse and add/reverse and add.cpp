#include<iostream>
#include<cstdio>

using namespace std;

long long int rev(long long int n)
{
    long long int ulta=0;
    while(n!=0)
    {
        ulta=ulta*10;
        ulta=ulta+(n%10);
        n=n/10;

    }
    return ulta;
}

int main()
{
    long long int numb,temp;
    int i,t,flag;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        flag=0;
        cin>>numb;


     while(numb!=rev(numb))
      {
            temp=rev(numb);
            numb=numb+temp;
            flag++;

        }
        printf("%d %lld\n",flag,numb);



    }

    return 0;

}


