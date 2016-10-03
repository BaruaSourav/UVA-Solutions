#include<stdio.h>

int main()
{
    int a,b,c;
    char ans;
    while((scanf("%d%d%d",&a,&b,&c))!=EOF)
    {
        if((b==0&&c==0&&a==1)||(a==0&&b==1&&c==1))
        {
            ans='A';
        }
        else if((a==0&&c==0&&b==1)||(b==0&&a==1&&c==1))
        {
            ans = 'B';
        }
        else if((a==0&&b==0&&c==1)||(a==1&&b==1&&c==0))
        {
            ans = 'C';
        }
        else if ((a==b&&c==b))
            ans='*';

        printf("%c\n",ans);


    }





    return 0;
}
