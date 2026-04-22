#include<stdio.h>
int main(){
printf("\n Enter Yuor Choice");
char choice;
scanf("%c",&choice);
int x,y;
printf("\n Enter x and y");

scanf("%d %d",&x,&y);

switch(choice){

case '+':

printf("\n add of %d and %d %d",x,y,x+y);

break;

case '-':

printf("\n sub of %d and %d %d",x,y,x-y);

break;

case '*':

printf("\n mul of %d and %d %d",x,y,x*y);

break;

case '/':

printf("\n div of %d and %d %d",x,y,x/y);

break;

default:

printf("\n Invalid choice");

break;
}
}