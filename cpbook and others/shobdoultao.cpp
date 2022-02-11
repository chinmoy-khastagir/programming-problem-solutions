#include <stdio.h>
#include <string.h>

int main()
{
   char a[1000],b[1000];
   int i,j,len,n=0;
   printf("Enter a string and press enter button:");
   gets(a);
   len=strlen(a);

   for(i=0;i<len;i++)
     {

       if(a[i]==' '||i==len-1)
	{
	   if(i==len-1)
	     j=i;
	   else
	     j=i-1;
           for(;a[j]!=' '&&j>=0;j--)
	     {

	       b[n]=a[j];
               n++;
	     }

	 b[n]=' ';
         n++;

        }

      }

   b[n]='\0';
   puts(b);
   return 0;



}
