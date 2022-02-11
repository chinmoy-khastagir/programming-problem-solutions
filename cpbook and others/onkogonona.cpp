#include<stdio.h>
#include<math.h>

int main()
{
  int n,i;
  scanf("%d",&n);
  while(n--)
	{
	  scanf("%d",&i);
	  if(i<10000001)
		{
		  if(i==0)
			 printf("1\n");
		  else
			 printf("%d\n", (int)(1+log10(i)));
		}
	}

	return 0;
}