#include<stdio.h>

int main(){

int i_pos,pos1,pos2,pos3,total_degree;

while(scanf("%d %d %d %d"),&i_pos,&pos1,&pos2,&pos3){
    total_degree=1080;
    if(i_pos==0&&pos1==0&&pos2==0&&pos3==0)
        break;
    else{
        if(i_pos>=pos1)
            total_degree=total_degree+((i_pos-pos1)*9);
        else
            total_degree=total_degree+((40-pos1+i_pos)*9);

        if(pos2<=(pos1/2))
            total_degree+=((40-pos1+pos2)*9);
        else
            total_degree+=((pos1-pos2)*9);

        if(pos3<=(pos2/2))
            total_degree+=
    }
}

return 0;
}
