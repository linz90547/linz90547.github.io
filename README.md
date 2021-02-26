## 2020cce
# 基礎題：找零錢
```c
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d=50*%d+5*%d+1*%d\n",n,n/50,(n%50)/5,n%50%5);
}
```
# 基礎題：因數個數
```c
#include<stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(n%i==0) ans++;
	}
	printf("%d\n",ans);
}
```
# 基礎題：找倍數
```c
#include<stdio.h>
int a[10];
int main()
{
	int ans=0;
	for(int i=1;i<=10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%3==0) ans++;
	}
	printf("%d\n",ans);
}
```
# 基礎題：整數轉換為等級
```c
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if (n>=90) printf("A\n");
	if (n<90&&n>=80) printf("B\n");
	if (n<80&&n>=60) printf("C\n");
    if (n<60) printf("F\n");
}
```
# 進階題：分式化簡
```c
#include<stdio.h>
int main()
{
	
	int a,b,c;
	scanf("%d%d",&a,&b);
	int x=a,y=b;
	while(b!=0)
	{
		c=b;
		b=a%b;
		a=c;
	}
	printf("%d %d\n",x/a,y/a);
}
```
# 進階題：讀入整數反序列印
```c
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
```
# 進階題：A的B次方函數
```c
#include<stdio.h>
int MYPOWER(int a,int b)
{
	int ans=1;
	for(int i=1;i<=b;i++)
	{
		ans*=a;
	}
		return ans;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
		return 0;
}
```
# 進階題：漸增數列相加
```c
#include<stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=n;i>=1;i--)
	{
		ans=ans+i*(i-1);
	}
	printf("%d\n",ans);
}
```
