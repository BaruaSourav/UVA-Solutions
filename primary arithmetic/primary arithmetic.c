#include<stdio.h>

int main()
{

    long a,b;
    int flag;
    int carry ;
    while(1)
    {

        carry = 0;
        flag=0;
        scanf("%ld%ld",&a,&b);
        if(a==0&&b==0)
            break;

        while(a!=0||b!=0)
        {








                    if(((a%10)+(b%10)+carry)>9)
                        {


                        flag++;
                        carry=1;

                        }
                    else carry=0;

                     a=a/10;
                     b=b/10;






        }

        if(flag==0)
            printf("No carry operation");

        else printf("%d carry operation",flag);


         if (flag> 1)
                        printf("s");

        printf(".\n");
        flag=0;



    }




    return 0;
}
