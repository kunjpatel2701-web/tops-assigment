#include<stdio.h>
int factFind(int num){
    int f;
    if(num==1){
return 1;
}
f= num*factFind(num-1);
return f;
}
int main(){
    int f=factFind(5);
    printf("\n factorial =%d",f);
}