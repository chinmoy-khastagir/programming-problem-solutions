#include<stdio.h>
#include<string.h>

int main()
{
  int n,i,j,len,f;
  char s[150],a[150];
  scanf("%d\n",&n);
  if(n<=20)
  {
  while(n--)
	{
	  gets(s);
	  len=strlen(s);
	  f=0;
	  for(i=len-1;i>=0;i--)
		{
		  if(s[i]==' '||i==0)
			{
			  if(i==0)
				j=i;
			  else
				j=i+1;
			  for(;j<len&&s[j]!=' ';j++)
				{
				  a[f]=s[j];
				  f++;
				}
				a[f]= ' ';
				f++;
			}

		}
		a[f]='\0';
		puts(a);
	}
	}
  return 0;
}
