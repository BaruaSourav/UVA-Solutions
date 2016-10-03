#include<stdio.h>

int main()
{
    int T,i;
    float c,d,temp;
    scanf("%d",&T);
    for(i=1;i<=T;i++){

        scanf("%f%f",&c,&d);
        temp=c+(((d)*5.00)/9.00);
        printf("Case %d: %.2f\n",i,temp);

    }
    return 0;
}
