#include<stdio.h>
int main()
{
    char str[10],rev[10];
    int i=0,counter=0,j,k=0;
    printf("\n enter string");
    scanf("%s",str);
    while(str[i]!='\0'){
        counter++;
        i++;
    }
    printf("\n length of str=%d",counter);
    i--;
    j=i;
    while(j>=0){
        rev[k]=str[j];
        printf("\n str[%d]=%c rev[%d]=%c",j,str[j],k,rev[k]);
            k++;
            j--;
    }
            }
        