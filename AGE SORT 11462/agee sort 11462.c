#include <stdio.h>
int age[100];
int times[100];
int main()
{
     int input,i,j,k,min,max;

    while (scanf("%d",&input)==1 && input!=0){
        min=32762;
        max=0;

    for(i=0;i<input;i++){
      scanf("%d",&j);
      age[i]=j;
      times[j]++;
      if(min>j) min=j;
      if (max<j) max=j;
    }
    for(i=0;i<max;i++){
      if(age[i]!=0){
        for(k=0;k<times[i];k++){
            if(i!=min&&k!=0) cout<<" ";
            cin>>age[i];

        }
        age[i]=0;
        times[i]=0;
       }
    }

   printf("\n");
    }


    return 0;
}
