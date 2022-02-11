#include<stdio.h>

int main()
{
    long int num,v,p;
    while(scanf("%d",&num))
    {
        if(num<2)
        {
            break;
        }
        printf("%d = ",num);

        v=2;
        p=0;

        while((num/v)!=0)
        {
            if((num%v)==0)
            {
                num=num/v;
                p++;
            }
            else
            {
                if(p!=0)
                {
                  printf("%d^%d",v,p);
                  printf(" * ");
                }
                v++;
                p=0;
            }
        }

        if(p!=0)
        {
          printf("%d^%d",v,p);
          printf("\n");
        }
    }

    return 0;

}
