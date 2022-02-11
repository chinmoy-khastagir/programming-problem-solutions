#include<stdio.h>

int main()
{
    int participant_num,hotel_num,weekend_num,price_per_person,avail_bed_per_weekend;
    int i,flag,t;
    unsigned long int budget,total_price,min_price;

    while(scanf("%d %lu %d %d",&participant_num,&budget,&hotel_num,&weekend_num) !=EOF)
    {
        flag=total_price=min_price=0;
        while(hotel_num--)
        {
            scanf("%d",&price_per_person);
            total_price=price_per_person*participant_num;

            t=weekend_num;

            while(t--)
            {
                scanf("%d",&avail_bed_per_weekend);
                if((total_price<=budget)&&(avail_bed_per_weekend>=participant_num))
                {
                    flag=1;

                }

                if((min_price>total_price&&flag==1)||min_price==0)
                    min_price=total_price;

            }

        }

        if(flag==1)
            printf("%lu\n",min_price);
        else
            printf("stay home\n");


    }

    return 0;
}
