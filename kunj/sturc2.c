#include<stdio.h>
struct fruit{
    int fno;
    char fname[20];
    float price;
};
int main()
{
    struct fruit f[5];
    int i;
    for(i=0;i<5;i++){
    printf("Enter the fruit no name and price of fruit:%d",i+1);
    scanf("%d %s %f",&f[i].fno,f[i].fname,&f[i].price);
}
printf("The fruitno fruitname price");
for(i=0;i<5;i++){
printf("%d %s %f",f[i].fno,f[i].fname,f[i].price);
}
return 0;

}