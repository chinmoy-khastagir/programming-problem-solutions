#include<stdio.h>

int main()
{
    int t,h[2],m[2],s[2],p,total;
    scanf("%d",&t);
    if(t<20)
    {
      while(t--)
      {

          scanf("%d %d %d",&h[0],&m[0],&s[0]);
          scanf("%d %d %d",&h[1],&m[1],&s[1]);
          scanf("%d",&p);
          total=0;

          if(h[0]>=0&&h[0]<=24&&m[0]>=0&&m[0]<=60&&s[0]>=0&&s[0]<=60)
          {
              if(h[1]>=0&&h[1]<=24&&m[1]>=0&&m[1]<=60&&s[1]>=0&&s[1]<=60)
              {
                  if((h[1]-h[0])<0&&h[0]>12)
                  {
                      total+=((24+(h[1]-h[0]))*3600);

                  }
                  else if(h[1]-h[0]<0)
                  {
                      total+=((12+(h[1]-h[0]))*3600);

                  }
                  else
                    total+=((h[1]-h[0])*3600);

                  total=(total+((m[1]-m[0])*60)+(s[1]-s[0]))*p;


              }
          }

          printf("%d\n",total);


      }
    }
    return 0;
}
