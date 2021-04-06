# 2020cce
## 基礎題：找零錢
```c
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d=50*%d+5*%d+1*%d\n",n,n/50,(n%50)/5,n%50%5);
}
```
## 基礎題：因數個數
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
## 基礎題：找倍數
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
## 基礎題：整數轉換為等級
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
## 基礎題：計算幾週與幾天
```c
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d %d\n",n/7,n%7);
}
```
## 基礎題：計程車資計算
```c
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<2500) printf("100\n");
	if(n>=2500&&n%500==0) printf("%d\n",100+((n-2000)/500)*5);
	if(n>=2500&&n%500!=0) printf("%d\n",105+((n-2000)/500)*5);
}
```
## 基礎題：兩數間可被5整除的整數
```c
#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int t;
	if(a>b)
	{
		t=b;
		b=a;
		a=t;
	}
	for(int i=a;i<=b;i++)
	{
		if(i%5==0) printf("%d\n",i);
	}
}
```
## 基礎題：整數間最大距離
```c
#include<stdio.h>
int main()
{
	int a,b,c,t;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		t=a;
		a=b;
		b=t;
	}
	if(a<c)
	{
		t=a;
		a=c;
		c=t;
	}
	if(b<c)
	{
		t=b;
		b=c;
		c=t;
	}
	printf("%d\n",a-c);
}
```
## 進階題：大小寫轉換
```c
#include<stdio.h>
int main()
{
	char a[10];
	scanf("%s",&a);
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
## 進階題：計算陣列的平方值
```c
#include<stdio.h>
int a[10];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		printf("%d,",a[i]*a[i]);
	}
	printf("\n");
}
```
## 進階題：2進位轉10進位
```c
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a,b,c,d;
	a=n/1000;
	b=(n%1000)/100;
	c=(n%1000%100)/10;
	d=n%1000%100%10;
	printf("%d\n",8*a+4*b+2*c+1*d);
}
```
## 基礎題：分開整數的每個數字
```c
#include<stdio.h>
int main()
{
	int n,a,b,c,d,e;
	scanf("%d",&n);
	
	a=n/10000;
	b=(n%10000)/1000;
	c=(n%10000%1000)/100;
	d=(n%10000%1000%100)/10;
	e=n%10000%1000%100%10;
	
	printf("%d   %d   %d   %d   %d",a,b,c,d,e);
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
	int n,sum=0,r=1;
	scanf("%d",&n);	
	int x=n;
	while(n!=0)
	{
		n/=10;
		sum++;
	}
	for(int i=1;i<sum;i++)
	{
		r*=10;
	}
	
	printf("%d",x/r);
}
```
## 基礎題：輸出從0到N的偶數
```c
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		if(i%2==0) printf("%d ",i);
	}
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
#include <stdio.h>
int main()
{
	char a[50];
	int one=0 , two=0 , three=0 , four=0 , five=0 , six=0;
	scanf("%s" , &a);
	for(int i=0;i<50;i++)
	{
		if(a[i]=='1') one+=1;
		if(a[i]=='2') two+=1;
		if(a[i]=='3') three+=1;
		if(a[i]=='4') four+=1;
		if(a[i]=='5') five+=1;
		if(a[i]=='6') six+=1;	
	}
	printf("1:%d\n" , one);	
	printf("2:%d\n" , two);
	printf("3:%d\n" , three);
	printf("4:%d\n" , four);
	printf("5:%d\n" , five);
	printf("6:%d\n" , six);
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
		if(n%10>a) a=n%10;
		n/=10;
	}
	return a;
}
int main(void){
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
## 基礎題：N數之和
```c
#include<stdio.h>
int a[10];
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		ans+=a[i];
	}
	printf("%d\n",ans);
}
```
## 基礎題：三數極大
```c
#include<stdio.h>
int main()
{
	int a,b,c,t;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		t=b;
		b=a;
		a=t;
	}
	if(a<c)
	{
		t=c;
		c=a;
		a=t;
	}
	printf("%d\n",a);
}
```
## 基礎題：計算商數
```c
#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d\n",a/b);
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
	int x,ans=0;
	scanf("%d",&x);
	for(int i=1;i<=sum-1;i++)
	{
		if(a[i]==x) ans++;
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
	int sum=0;
	for(int i=1;i<=100;i++)
	{
		printf("Enter an integer ( 999 to end ): \n");
		scanf("%d",&a[i]);
		sum++;
		if(a[i]==999)break;
	}
	int ans=0;
	for(int i=1;i<=sum-1;i++)
	{
		ans+=a[i];
	}
	printf("The total is: %d",ans);
}
```
