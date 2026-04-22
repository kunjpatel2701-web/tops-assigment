#include<stdio.h>
void printMSG(){
    printf("\n Hello World");
}
void add (int a, int b){
    int c=a+b;
    printf("\n addition =%d",c);
}
int square(int num){
    int s;
    s=num*num;
    return s;
}
float areaOFcircle(){
    int r;
    float area;
    printf("\n Enter the value of r");
    scanf("%d",&r);
    area=3.14*r*r;
    return area;
}
int main(){
    printMSG();
    add(10,20);
    int s=square(5);
    printf("\n square =%d",s);
    float a= areaOFcircle();
    printf("\n area of circle =%f",a);
}