#include<iostream>

using namespace std;
int t,i;
int k,wall,high=0,low=0;
void check(int arr[])
{
     for(k=0;k<wall-1;k++)
        {
            if(arr[k]<arr[k+1])
                high++;
            else if(arr[k]>arr[k+1])
                low ++;
        }

        cout<<"Case "<<i<<": "<<high<<" "<<low<<endl;
        high=low=0;
}


int main()
{

    cin>>t;
    for(i=1;i<=t;i++)
    {

        cin>>wall;
        int arr[wall];
        for(k=0;k<wall;k++)
            cin>>arr[k];

        check(arr);





    }

}
