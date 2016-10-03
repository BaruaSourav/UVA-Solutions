
#include <cstdio>
#include<iostream>

using namespace std;

int age[100];
int times[100];
int main()
{
     int input,i,j,k,min;

    while (cin>>input)
        {
            if (input==0) break;
        min=32762;
    for(i=0;i<input;i++){
      scanf("%d",&j);
      age[i]=j;
      times[j]++;
      if(min>j)min=j;
    }
    for(i=0;i<100;i++){
      if(age[i]!=0){
        for(k=0;k<times[i];k++){
            if(i==min&&k==0){}
            else printf(" ");
            printf("%d",age[i]);

        }
        age[i]=0;
        times[i]=0;
       }
    }

   printf("\n");
    }


    return 0;
}
