#include<stdio.h>

int main()
{
    unsigned long int numb;

    while((scanf("%d",&numb))!=(numb==0))
    {
        int i,k,position,temp;
        int age[numb];
        for(i=0;i<numb;i++)
            scanf("%d",&age[i]);
        /*for(i=0;i<numb-1;i++)
            for(k=0;k<numb-1-i;k++)
        {
            if(age[k]>age[k+1])
            {
                temp=age[k];
                age[k]=age[k+1];
                age[k+1]=temp;
            }
        }

        */

        for ( i = 0 ; i< ( numb - 1 ) ; i++ )
                {
      position = i;

      for ( k = i + 1 ; k< numb ; k++ )
                {
         if ( age[position] > age[k] )
            position = k;
      }
      if ( position != i )
      {
         temp = age[i];
         age[i] = age[position];
         age[position] = temp;
      }
   }



        for(i=0;i<numb;i++)
            printf("%d ",age[i]);

        printf("\n");


    }







    return 0;
}
