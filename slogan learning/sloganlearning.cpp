#include<iostream>
#include<string>

#include<cstdio>
using namespace std;

int main()
{
    int T,tc,i,j;


    while(cin>>T)
        {
            string input[T];
            string output[T];
            getchar();
        for(i=0;i<T;i++)
            {
                getline(cin,input[i]);
                //cout<<input[i];
                getline(cin,output[i]);
                //cout<<output[i];
            }
        cin>>tc;
        getchar();
        string slogan;
            for( j=0;j<tc;j++)
                {
                getline(cin,slogan);
                    for(i=0;i<T;i++){
                        if(slogan==input[i])
                            cout<<output[i]<<endl;
                    }


                    }
        }
    return 0;
}
