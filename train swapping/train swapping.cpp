#include<iostream>


using namespace std;

int main()
{
    int t,l,i,j,temp,swapp=0;
    cin>>t;
    while(t--)
    {
        cin>>l;
        int array[l];
        for(i=0;i<l;i++)
        {
            cin>>array[i];
        }


         for(i=0;i<l;i++){
        for(j=0;j<l-1-i;j++){
            if(array[j]>array[j+1])
                {
                temp = array[j+1];
                array[j+1] = array[j];
                array[j]  = temp;
                swapp+=1;
                                    }
                            }
                      }
            cout<<"Optimal train swapping takes "<<swapp<<" swaps."<<endl;
            swapp=0;



    }







    return 0;
}
