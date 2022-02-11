#include<stdio.h>
#include<string.h>

int main()
{
  char s[51];
  int n,i,sum;
  scanf("%d\n",&n);
  while(n--)
  {
	 gets(s);
	 sum=0;
	 for(i=0;i<strlen(s);i++)
	 {
	  if(s[i]=='1')
		sum+=1;
	  if(s[i]=='0')
		sum-=1;
	  if(sum<0)
		 break;

	 }

	 if(sum<0)
	  printf("MAGIC\n");
	 else
     printf("NORMAL\n");
  }

  return 0;
}