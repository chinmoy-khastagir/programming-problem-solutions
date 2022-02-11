#include<stdio.h>
#include<math.h>

unsigned long long int gcdfunc(unsigned long long int x,unsigned long long int y)
{
	unsigned long long int z;

	if(x<y)
	  {
				z=x;
				x=y;
				y=z;
	  }

	while((x%y)!=0)
	{
		z=x;
		x=y;
		y=z%y;

	}

  return y;

}

unsigned long long int lcmfunc(unsigned long long int x,unsigned long long int y,unsigned long long int gcd)
{
    return abs(x*y)/gcd;

}

int main()
{
    int t,flag;
    unsigned long long int g,l,count,gc,a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%llu %llu",&g,&l);
        count=g*l;
        a=1;
        b=count/a;
        flag=0;
        if(a==1&&b==1)
        {
            printf("1 1\n");
            flag=1;
        }
        while(a<=(count/2))
        {
            if((a*b)==count&&((a==1||b==1)||(a!=g&&b!=l)))
            {
                gc=gcdfunc(a,b);

                if(g==gc&&l==lcmfunc(a,b,gc))
                {
                    if(a<b)
                        printf("%llu %llu\n",a,b);
                    else
                        printf("%llu %llu\n",b,a);

                    flag=1;
                    break;

                }

            }

            a++;
            b=count/a;

        }

        if(flag==0)
        {
            printf("-1\n");

        }


    }

    return 0;
}
