#include <iostream>

using namespace std;

int main()
{
     int yr,i=0,j=0,k=0;
    while(cin>>yr)
    {
        if((yr%4==0 && yr%100!=0) || yr%400==0){
            cout<<"This is leap year."<<endl;
            i=1;
        }
        if(yr%15==0){
            cout<<"This is huluculu festival year."<<endl;
            j=1;
        }
        if(yr%55==0 && i==1){
            cout<<"This is bulukulu festival year."<<endl;
            k=1;
        }
        if(i==0 && j==0 && k==0)
            cout<<"This is an ordinary year."<<endl;
            i=j=k=0;
            cout<<""<<endl;
    }
    return 0;
}


