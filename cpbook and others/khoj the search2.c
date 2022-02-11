#include<stdio.h>
#include<string.h>

int main()
{
    int r,s,t,i,j,max,ptr,bol,num;
    char a[128],b[128];
    scanf("%d",&t);
    scanf("%*c");

    while(t--)
    {
        scanf("%s %s",a,b);
        r=strlen(a);
        s=strlen(b);
        max=r-s;
        num=0;

        for(i=0;i<=max;i++)
        {
            bol=1;
            ptr=i;
            for(j=0;j<s;j++)
            {

                if(a[ptr]!=b[j])
                {
                    bol=0;
                    break;
                }
                ptr++;
            }

            if(bol==1)
            {
                num++;
            }
        }

        printf("%d\n",num);

    }

    return 0;
}
