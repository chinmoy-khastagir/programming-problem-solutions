#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    unsigned long int n,i,j,k,len,fac,m;
    char a[10][21],s[210],*ch;

    scanf("%lu",&n);
    scanf("%*c");

    while(n--)
    {
        gets(s);

        if(strlen(s)<=209)
        {
            ch=strtok(s," .,;!?");
            i=0;
            if(strlen(ch)<=20)
                strcpy(a[i],ch);

            while(ch!=NULL)
            {
                ch=strtok(NULL," .,;!?");
                i++;
                if(ch!= NULL && strlen(ch)<=20)
                    strcpy(a[i],ch);
            }

            len=i;
            fac=1;

            for(i=1;i<len;i++)
                fac*=(i+1);

            for(j=0;j<len-1;j++)
            {
                m=1;
                k=j+1;

                for( ;k<len;k++)
                {
                    if(strcmp(a[j],a[k])==0)
                    {
                        ++m;
                        fac/=m;
                        strcpy(a[k],a[j+1]);
                        strcpy(a[j+1],a[j]);
                        j++;
                    }
                }
            }

            printf("1/%lu\n",fac);
        }
    }
    return 0;
}
