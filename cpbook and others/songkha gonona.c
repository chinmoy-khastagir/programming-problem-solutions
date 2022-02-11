#include<stdio.h>

int main()
{
    char ch[10000];
    int i,n,t,flag;
    scanf("%d",&t);
    scanf("%*c");

    while(t--)
    {
        gets(ch);
        i=0,n=0;
        flag=0;
        while(ch[i]!='\0')
        {
          if((ch[i]==' '&&flag==0)||(ch[i]!=' '&&flag==1))
          {
              i++;
              continue;
          }
          if(ch[i]!=' '&&flag==0)
          {
              flag=1;
              n++;
          }
          if(ch[i]==' '&&flag==1)
          {
              flag=0;
          }

          i++;

        }
        printf("%d\n",n);
    }

    return 0;
}
