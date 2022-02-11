/*

  This is a solution of the Josephus Problem in case of where every 2nd person is killed until
  there is a single survivor left. Here, the count starts from the first person. The first person
  is left alive and the second person is killed and the third person is left alive and so on...

  I am trying to come up with a more generalized solution of the problem where user can specify the
  number of alive person to be skipped until the next killing. That's done in the file named
  "mathakata-general solution".

*/


#include<stdio.h>

int main()
{
    int a[10000],i,dead=0,thumbsup=0,last_alive,person_num;

    printf("How many people will stand in the circle ?\n");
    scanf("%d",&person_num);

    for(i=0;i<person_num;i=i+1)
    {
        a[i]=1;
    }

    for(i=0;i<person_num;i++)
    {
        if(dead==(person_num-1))
        {
            break;
        }

       if(a[i]==0&&i!=(person_num-1))
       {
           continue;
       }

       if(thumbsup==1&&a[i]==1)
       {
           a[i]=0;
           dead++;
           thumbsup=0;

       }

       if(thumbsup==0&&a[i]==1)
       {
           thumbsup=1;
           last_alive=i;
       }



       if(i==(person_num-1))
       {
           i=-1;
       }

    }

    printf("last alive: %d\n",last_alive+1);


    return 0;
}
