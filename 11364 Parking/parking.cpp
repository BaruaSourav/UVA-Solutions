#include<iostream>
#include<cstdio>



using namespace std;

int main()
{
    int test,shops,min,max,distance;
    cin>>test;
    while(test--)
    {
        max=0;
        min=100;
        cin>>shops;
        while(shops--)
        {
            cin>>distance;
            if(distance>max) max=distance;
            if(distance<min) min=distance;

        }
        cout<<2*(max-min)<<endl;
    }
  return 0;
}
