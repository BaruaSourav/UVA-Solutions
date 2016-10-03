#include<stdio.h>
#include<string.h>







int main()
{
    int T,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        int k,b,u,s,p,f,t,m;
        b=u=s=p=f=t=m=0;
        char input[40];
        int output;
        scanf("%s",input);
        for(k=0;k<strlen(input);k++)
        {
            if(input[k]=='B')
            b++;
            else if(input[k]=='U')
            u++;
            else if(input[k]=='S')
            s++;
            else if(input[k]=='P')
            p++;
            else if(input[k]=='F')
            f++;
            else if(input[k]=='T')
            t++;
            else if(input[k]=='M')
            m++;

        }

    }


    return 0;
}
