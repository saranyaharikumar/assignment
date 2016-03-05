#include<stdio.h>
void main()
{
    int a[20]={1,2,2,2,3,4,4},i,x;
    printf("enter x");
    scanf("%d",&x);
    for(i=0;i<7;i++)
    {
        if (a[i]>x)
        {
            break;
        }
    }
    if (i==7)
    {
        printf("\nindex is %d",-1);
    }
    else
    {
        printf("index is %d",i);
    }
   
}
