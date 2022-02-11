#include<stdio.h>

int main(){

int t,max_speed,speed,i,num_students,flag;
scanf("%d",&t);
i=1;

while(t--){
    scanf("%d",&num_students);
    flag=0;
    while(num_students--){
        scanf("%d",&speed);
        if(flag==0){
            max_speed=speed;
            flag=1;
        }
        if(max_speed<speed)
            max_speed=speed;

    }

    printf("Case %d: %d\n",i,max_speed);
    i++;

}

return 0;
}
