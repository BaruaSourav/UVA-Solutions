#include<stdio.h>
#include<math.h>


int main()
{   int a,b,i,s_count,check;
    while(1){
            s_count=0;
            scanf("%d%d",&a,&b);
            if(a==0&&b==0)
                break;
            for(i=a;i<=b;i++)
                {
                check=sqrt(i);
                if(i==check*check)
                    s_count++;
                }
            printf("%d\n",s_count);

    }

    return 0;
}
