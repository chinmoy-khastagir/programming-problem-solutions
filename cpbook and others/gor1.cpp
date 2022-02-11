#include <stdio.h>

int main()
{
 int n,a[6],i;
 scanf("%d",&n);
 while(n--)
  {
	 scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
	 a[5]=0;
	 for(i=0;i<5&&a[i]>=0&&a[i]<=100;i++)
		  a[5]+=a[i];
	 printf("%d\n",(int)(a[5]/5));
  }
 return 0;
}