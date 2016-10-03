#include<iostream>
#include<string>
using namespace std;
int main()
{
    string input,output;
    int i=1;
    while(cin>>input)
    {
        if(input=="*") break;
        else if(input=="Hajj") output="Hajj-e-Akbar";
        else if(input=="Umrah") output="Hajj-e-Asghar";

        cout<<"Case "<<i<<":"<<output<<endl;
        i++;
    }
    return 0;
}
