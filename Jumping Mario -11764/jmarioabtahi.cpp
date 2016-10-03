#include <iostream>

using namespace std;

int main()
{

    int T,N,testCase;
    cin>>T;
    for(testCase=0;testCase<T;testCase++) {
        int high=0,low=0;
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++) {
            cin>>arr[i];
        }
        for(int j=0;j<N-1;j++) {
            if(arr[j]<arr[j+1])
                ++high;
            if(arr[j]>arr[j+1])
                ++low;
        }
        cout<<"Case "<<testCase+1<<": "<<high<<" "<<low<<endl;
    }
}

