#include<stdio.h>

int main()
{
  char s[51];
  int i,t;
  scanf("%d",&t);
  scanf("%*c");
  while(t--)
	{
	  gets(s);
	  for(i=0;s[i]!='\n';i++)
		{
		  if(s[i]== '\n')
			 {
				printf("newline at %d  ",i);
			 }
		  else
			 printf("\ncharacter %c is at %d",s[i],i);
		  if(s[i]=='L')
			  s[i]=s[i-1];

		  if(s[i]=='R')
			  s[i]=s[i+1];
		}
	  printf("\n Null is at %d \n",i);
	  printf("%s\n",s);
	}

  return 0;
}
