#include<stdio.h>
#include<math.h>


int main()
{
    int i,t;
    double pi;
    scanf("%d",&t);
    pi=acos(-1.0);
    for(i=1;i<=t;i++)
    {
        double l,r,w,ar,ag;
        scanf("%lf",&l);
        r=l/5;
        w=(l*6)/10;
        ar=pi*r*r;
        ag=(l*w)-ar;
        printf("%.2lf %.2lf\n",ar,ag);


    }

    return 0;
}
