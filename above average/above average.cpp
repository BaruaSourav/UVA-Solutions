#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    float avg,result,sum=0;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        float count=0;
        cin>>n;
        float array[n];
        for(int i=0;i<n;i++)
        {
            cin>>array[i];
            sum+=array[i];
        }
        avg=sum/n;
        sum=0;
        for(int i=0;i<n;i++)
        {
            if(array[i]>avg) count++;
        }
        result=(count*100)/n;

        printf("%.3f%%\n",result);
        count=0;




    }
    return 0;
}
