#include<stdio.h>

int main()
{
  int n,r,w,h;
  scanf("%d",&n);
  while(n--)
  {
	 scanf("%d %d %d",&r,&w,&h);
	 if(r<101&&w<101&&h<101)
	  {
		 if(2*r<=w&&2*r<=h)
			printf("YES\n");
		 else
			printf("NO\n");
	  }
  }

  return 0;
}