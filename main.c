#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int x,i,j;
    srand(time(NULL));
    x= rand()%10+1;
    for(i =0;i<3;i++)
    {
        printf("\n Enter the %d try :\n",(i+1));
        scanf("%d",&j);
        if(j>x)
        {
            printf("%d is greater than x\n",j);
        }else if(j<x)
         {
            printf("%d is less than x\n",j);
        }else
         {
            printf("%d = x \n YOU wins\n",j);
            break;
         }
    }
    printf("x=%d\n",x);
    return 0;
}
