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
