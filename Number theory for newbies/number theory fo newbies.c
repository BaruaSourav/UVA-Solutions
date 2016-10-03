#include<stdio.h>

int main()
{
    long int x,flag;
    while((scanf("%d",&x))!=EOF)
    {
        int arr[20];
        int ix,temp,i=0;
        while((x/10)>0)
        {
            arr[i]=x%10;
            printf("%d",&x);

            x=(x/10);

            i++;
            flag++;

        }








    }







    return 0;

}
