#include<stdio.h>

int findavg(int x,int y,int z)
{
    int average;
    int max1,max2;


    if((x>=y&&y>=z)||(z<=x&&x<=y))
    {
        max1=x;
        max2=y;

    }
    else if((y>=z&&z>=x)||(x<=y&&y<=z))
    {
        max1=z;
        max2=y;

    }
    else if((x>=z&&z>=y)||(y<=x&&x<=z))
    {
        max1=x;
        max2=z;
    }



    average=(max1+max2)/2;

    return average;
}


int main()
{
    int T,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        int t1,t2,fin,att,ct1,ct2,ct3,sum,avgct;
        char grade;

        scanf("%d%d%d%d%d%d%d",&t1,&t2,&fin,&att,&ct1,&ct2,&ct3);


        avgct=findavg(ct1,ct2,ct3);

        sum=t1+t2+fin+att+avgct;

        if(sum>=90)
            grade='A';
        else if(80<=sum&&sum<=90)
            grade='B';
        else if(70<=sum&&sum<=80)
            grade='C';
        else if(60<=sum&&sum<=70)
            grade='D';
        else if(sum<60)
            grade='F';

        printf("Case %d: %c\n",i,grade);





    }
    return 0;
}
