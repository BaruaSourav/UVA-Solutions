#include<stdio.h>


int max(int a,int b,int c)
{
    int big;
    if(a>b&&a>c)
        big=a;
    else if(b>c&&b>a)
        big=b;
    else big=c;
    return big;

}




int main()
{
    int x,y,z;
    while(1)
    {
       scanf("%d%d%d",&x,&y,&z);
       if(x==0&&y==0&&z==0)
            break;

       if(max(x,y,z)==x)
       {
          if((x*x)==((y*y)+(z*z)))
             printf("right");

           else printf("wrong");
       }
       else if(max(x,y,z)==y)
       {
          if((y*y)==((x*x)+(z*z)))
             printf("right");

           else printf("wrong");
       }
       else
       {
          if((z*z)==((y*y)+(x*x)))
             printf("right");

           else printf("wrong");
       }
    printf("\n");
    }

    return 0;
}
