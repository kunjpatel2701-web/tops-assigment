#include<stdio.h>
int main()
{
    int a[5];
    int i;
    char ch[5];
    float x[5]; 
    printf("\n character array");
    for(i=0;i<5;i++){
        printf("\n enter the character[%d]",i);
        scanf("%c",&ch[i]);

    }
    for (i=0;i<5;i++){
        printf("\n character[%d]=%c",i,ch[i]);
    }
    printf("\n integer array");
    for(i=0;i<5;i++){
    printf("\n entera[%d]",i);
    scanf("%d",&a[i]);
    }
    for (i=0;i<5;i++){
        printf("\n a[%d]=%d",i,a[i]);
    }