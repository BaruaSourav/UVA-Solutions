
#include<cstdio>
#include<cstdlib>
#include<iostream>

using namespace std;


int main()
{
    int n,flag,i,diff;
    while((scanf("%d",&n))!= EOF)
    {
    int numb[n];
    int check[n-1];

    for(i=0;i<n;i++)
        scanf("%d",&numb[i]);

    for(i=0;i<n-1;i++)
    {
        diff=(numb[i+1]-numb[i]);
        check[i]=abs(diff);
    }

    for(i=0;i<n-1;i++)
    {
        if(check[i]==(n-1-i))
           flag =1;
        else
        {
            flag =0;
            break;

        }
    }

    if(flag==1)
        printf("Jolly\n");

    else if(flag==0)
        printf("Not jolly\n");











    }

    return 0;
}
