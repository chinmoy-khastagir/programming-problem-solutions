#include<stdio.h>

int gcdfunc (int x, int y)
{
	int z;

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

int main()
{
    int n,i,j;
    unsigned long int g;

    while(scanf("%d",&n))
    {
        if(n==0)
        {
            break;
        }

        g=0;

        for(i=1;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                g+=gcdfunc(i,j);
            }
        }

        printf("%lu\n",g);
    }

    return 0;

}
