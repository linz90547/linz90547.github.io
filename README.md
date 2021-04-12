# 2020cce
## 進階題：分式化簡
```c
#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int ans;
	for(int i=1;i<=a;i++)
	{
		if(a%i==0&&b%i==0) ans=i;
	}
	printf("%d %d\n",a/ans,b/ans);
}
```
## 進階題：讀入整數反序列印
```c
#include<stdio.h>
int a[1000];
int main()
{
	int sum=0;
	for(int i=1;i<=1000;i++)
	{
		scanf("%d",&a[i]);
		sum++;
		if(a[i]==0) break;
	}
	for(int i=sum-1;i>=1;i--)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
```
## 進階題：A的B次方函數
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
## 進階題：漸增數列相加
```c
#include<stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<n;i++)
	{
		ans+=i*(i+1);
	}
	printf("%d\n",ans);
}
```
## 進階題：大小寫轉換
```c
#include<stdio.h>
int main()
{
	char a[10];
	scanf("%s",a);
	for(int i=0;i<10;i++)
	{
		if(a[i]>='A' && a[i]<='Z')
		{
			a[i]+=32;
		}
		else if(a[i]>='a' && a[i]<='z')
		{
			a[i]-=32;
		}
	}
	printf("%s\n",a);
}
```
## 基礎題：字元判別
```c
#include<stdio.h>
int main()
{
	char n;
	scanf("%c",&n);
	
	if(n>='a'&&n<='z')printf("L");
	else if(n>='A'&&n<='Z')printf("U");
	else if(n>='0'&&n<='9')printf("D");
	else printf("O");
}
```
## 基礎題：數字之首
```c
#include<stdio.h>
int main()
{
	int n,sum=0;
	scanf("%d",&n);	
	int m=n;
	while(n!=0)
	{
		n/=10;
		sum++;
	}
	int ans=1;
	for(int i=1;i<sum;i++)
	{
		ans*=10;
	}
	
	printf("%d",m/ans);
}
```
## 進階題：除惡務盡
```c
#include<stdio.h>
int main()
{	
	char a[50];
	scanf("%s",a);
	
	for(int i=0;a[i]!=0;i++)
	{
		if(a[i]!='2') printf("%c",a[i]);
	}
	printf("\n");
}
```
## 進階題：擲骰統計
```c
#include<stdio.h>
int main()
{
	char n[50];
	scanf("%s",n);
	int a=0,b=0,c=0,d=0,e=0,f=0;
	for(int i=0;n[i]!=0;i++)
	{
		if(n[i]=='1') a++;
		if(n[i]=='2') b++;
		if(n[i]=='3') c++;
		if(n[i]=='4') d++;
		if(n[i]=='5') e++;
		if(n[i]=='6') f++;	
	}
	printf("1:%d\n",a);	
	printf("2:%d\n",b);
	printf("3:%d\n",c);
	printf("4:%d\n",d);
	printf("5:%d\n",e);
	printf("6:%d\n",f);
}
```
## 進階題：函數找整數的最大數字
```c
#include<stdio.h>
int max_digit(int n)
{
	int a=0;
	while(n!=0)
	{
		if(n%10>a)
		{
			a=n%10;
		}
		n/=10;
	}
	return a;
}
int main(void)
{
  int n;
  scanf("%d", &n);
  printf("[%d]", max_digit(n));
  return 0;
}
```
## 進階題：星星等腰三角 
```c
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int space=n-i;
		for(int k=1;k<=space;k++)
		{
			printf(" ");
		}
		int star=2*i-1;
		for(int k=1;k<=star;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
```
## 進階題：反序數字
```c
#include<stdio.h>
int main()
{
	int n,sum=0;
	scanf("%d",&n);
	for(int i=n;i!=0;i/=10)
	{
		sum=(sum+i%10)*10;
	}
	printf("%d+%d=%d\n",n,sum/10,n+sum/10);
}
```
## 進階題：絕對值函數
```c
#include<stdio.h>
int f(int n)
{
	if(n<0) n=-n;
	return n;
}
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}
```
## 進階題：陣列找出現次數
```c
#include<stdio.h>
int a[10];
int main()
{
	int sum=0;
	for(int i=1;i<=10;i++)
	{
		scanf("%d",&a[i]);
		sum++;
		if(a[i]==0)break;
	}
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<sum;i++)
	{
		if(a[i]==n) ans++;
	}
	printf("%d\n",ans);
}
```
## 進階題：判斷大小
```c
#include<stdio.h>
int f(int a,int b)
{
	if(a>b)return 1;
	if(a<b)return -1;
	if(a==b)return 0;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d",f(a,b));
    return 0;
}
```
## 進階題：計算一列整數的總和
```c
#include<stdio.h>
int a[100];
int main()
{
	int ans=0;
	for(int i=1;i<=100;i++)
	{
		printf("Enter an integer ( 999 to end ): \n");
		scanf("%d",&a[i]);
		if(a[i]==999)break;
		ans+=a[i];
	}
	printf("The total is: %d",ans);
}
```
