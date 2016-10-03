#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main()
{
    char input[1000];
    int i,l,count=0;
    while(gets(input))
    {
       l=strlen(input);
       for(i=0;i<l;i++)
       {
           if(input[i]=='"')
           {
            count++;
            if(count%2!=0)cout<<"``";
            else cout<<"''";
           }
           else cout<<input[i];
    }
    cout<<endl;


    }
    return 0;
}

