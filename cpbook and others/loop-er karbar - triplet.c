#include<stdio.h>

int main()
{
    int a[3],x[3],i=1,t,flag;
    scanf("%d",&t);
    if(t<=20)
    {
      while(t--)
      {
          scanf("%d %d %d",&a[0],&a[1],&a[2]);
          printf("Case %d:\n",i++);

          if((a[0]==1&&a[1]==1&&a[2]==1)||(a[0]==0&&a[1]==0&&a[2]==0))
            continue;

          if(a[0]>=0&&a[0]<=20&&a[1]>=0&&a[1]<=20&&a[2]>=0&&a[2]<=20)
          {
              x[0]=0;
              x[1]=1;
              x[2]=2;
              flag=2;

              while(1)
              {
                 if(x[0]<=a[0]&&x[1]<=a[1]&&x[2]<=a[2])
                   printf("%d %d %d\n",x[0],x[1],x[2]);

                 if(x[2]>=a[2]&&(x[2]-x[1])==1&&(x[1]-x[0])==1)
                   break;


                 if(x[2]==a[2])
                 {
                     flag=1;
                 }

                 if(x[2]==a[2]&&x[2]-x[1]==1&&x[1]-x[0]!=1)
                 {
                     flag=0;
                 }

                 if(flag==0)
                 {
                    x[0]=x[0]+1;
                    x[1]=x[0]+1;
                    x[2]=x[1]+1;
                    flag=2;
                 }
                 else if(flag==1)
                   {
                     x[1]=x[1]+1;
                     x[2]=x[1]+1;
                     flag=2;
                   }
                 else
                    x[2]=x[2]+1;

              }
          }

      }
    }
    return 0;
}
