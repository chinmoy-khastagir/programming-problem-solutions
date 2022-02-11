#include<stdio.h>

int main()
{
 int n,l,i,num,j,x,a,k=0;
 scanf("%d",&n);
 if(n<=10)
  {
	 while(n--)
	 {
	 scanf("%d %d",&i,&l);
	 if((i>=0&&i<=9)&&(l>=1&&l<=20))
		{
			num=((l*(2+(l-1)))/2);
			a=1;
			x=0;
			printf("Case %d:\n",++k);
			for(j=1;j<=num;j++)
			 {
				printf("%d",i);
				if(j-x==a)
				 {
					printf("\n");
					x=j;
					++a;
				 }
			 }
			 printf("\n");
		}
	  }
  }
  return 0;
}