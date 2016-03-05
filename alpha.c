#include<stdio.h>
int main()
{
    char a[10];
	int n=0,c=0,x,j,count[10]={0};
	scanf("%s",a);
	while(a[n]!='\0') 
		n++;
	for(j=0;j<n;j++)
	{
		if((a[j]>='A')&&(a[j]<='Z')||(a[j]>='a')&&(a[j]<='z'))
		{
			  	x=a[j]-'A';
			    if(count[x]==0)
			    {
			        count[x]=1;
				      c++;
			    }
		}
	}
	printf("%d\n",c);
	return 0;
}
