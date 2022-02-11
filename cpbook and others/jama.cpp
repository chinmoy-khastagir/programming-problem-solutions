#include<stdio.h>

int main()
{
 unsigned long int t,n;
 scanf("%lu",&t);
 while(t--)
 {
	scanf("%lu",&n);
	if(n%2==0)
	 printf("red\n");
	else
	 printf("blue\n");
 }
 return 0;
}
