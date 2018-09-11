/*
 ============================================================================
 Name        : Lijeu.c
 Author      : marco
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	printf("\n Nouveal essai");
    int x,i,j;
    srand(time(NULL));
    x= rand()%10+1;
    printf("\n x in [1,10]\n");
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

    printf("\n------------------------------------------------------------ \n");
    printf("\n now x in [1,1000]\n");
    srand(time(NULL));
    x= rand()%1000+1;
    for(i =0;i<10;i++)
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
            printf("%d = x \n YOU win\n",j);
            break;
         }
    }
    printf("x=%d\n",x);

    return 0;
}
