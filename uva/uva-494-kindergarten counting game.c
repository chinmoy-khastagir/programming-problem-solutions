#include<stdio.h>
#include<string.h>

int main()
{
    char str[10000];
    int i,count;

    while(gets(str))
    {
        count=0;
        for(i=0;i<strlen(str);i++)
        {
            if(str[i]=' '&&(i!=0&&str[i-1]!=' '))
                count++;
        }
        printf("%d\n",count);
    }

    return 0;
}
