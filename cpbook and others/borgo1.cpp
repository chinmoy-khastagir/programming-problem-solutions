#include<stdio.h>

int main()
{
 int n,i,j,a;
 scanf("%d",&n);

	 while(n--)
	 {
	 scanf("%d",&i);
	 if(i>=1&&i<=100)
		{
			a=0;
			for(j=1;j<=i*i;j++)
			 {
				printf("*");
				if(j-a==i)
				 {
					printf("\n");
					a+=j-a;
				 }
			 }
			 printf("\n");
		}

  }
  return 0;
}