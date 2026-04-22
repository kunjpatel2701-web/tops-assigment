#include<stdio.h>
int main(){
    int i,num;
    for(i=1;i<=15;i++){
        if(i==15||i==10){
            continue;            if (i == 15 || i == 10) {
                break;
            }
        }
        printf("\n i=%d",i);
    }
    for(;;){
        printf("\n enter num");
        scanf("%d",&num);
        if(num==0){
            break;

        }
    }
}