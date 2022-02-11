#include<stdio.h>
#include<string.h>

int main()
{
    char str[100000],ch;
    long int i=0,flag=0;
    while(gets(str))
    {

    for(i=0;i<strlen(str);i++)
    {
        if(str[i]=='"'&&flag==0)
        {
            printf("``");
            flag=1;
        }
        else if(str[i]=='"'&&flag==1)
        {
            printf("''");
            flag=0;
        }
        else
        {
            printf("%c",str[i]);
        }
    }
       printf("\n");
    }


    return 0;
}
