#include<stdio.h>
#include<math.h>

int main()
{
    unsigned  int x,v,r,t;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&x);
        if(x<10000001){
        v=(int)(1+log10(x));
        if(x==0)
            printf("1\n");
        else
        {
            while(x!=0)
            {
            r=x%10;
            x=x/10;
            if(r%2==1)
                    r=r-1;
            else
                    r=r+1;



                printf("%*d",v,r);
                printf("\r");
                v--;
            }

            printf("\n");
        }
        }

        }

    return 0;
}
