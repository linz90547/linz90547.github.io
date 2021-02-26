#include<stdio.h>
int a[1000];
int main()
{
	int x=0;
	for(int i=1;i<=1000;i++)
	{
		scanf("%d",&a[i]);
		x++;
		if(a[i]==0) break;
	}
	for(int i=x-1;i>=1;i--)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
