#include<stdio.h>
int main()
{
    char str[10];
    int i=0,counter=0;
    printf("\n enter string");
    scanf("%s",str);
    //gets(str);
    while(str[i]!='\0')
    {
        counter++;
        i++;
    }
    printf("\n length of string=%d",counter);
    return 0;
}
