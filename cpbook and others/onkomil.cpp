#include<stdio.h>

int main()
{
  int t,n1,n2;
  scanf("%d",&t);
  while(t--)
	{
	  scanf("%d %d",&n1,&n2);

	  if(n1%10==n2%10&&n1/10==n2/10)
		{
		  if(n1%10==n1/10)
			printf("%d\n",n1/10);
		  else if(n1%10<n1/10)
			printf("%d%d\n",n1%10,n1/10);
		  else
			printf("%d%d\n",n1/10,n1%10);
		}

	  else if(n1/10==n2%10&&n1%10==n2/10)
		{
		  if(n1%10<n1/10)
			printf("%d%d\n",n1%10,n1/10);
		  else
			printf("%d%d\n",n1/10,n1%10);
		}

	 else if(n1/10==n2/10||n1/10==n2%10)
		 printf("%d\n",n1/10);
    
	 else if(n1%10==n2%10||n1%10==n2/10)
		 printf("%d\n",n1%10);

	 else
		printf("N\n");



	}

   return 0; 
}