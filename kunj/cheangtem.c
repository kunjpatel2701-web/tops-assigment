/*#include <stdio.h>
int main() {
   float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    

    scanf("%f", &celsius);

    
    fahrenheit = (celsius * 9 / 5) + 32;

  
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

     int num;

    printf("Enter an integer: ");
    scanf("%d", &num);
    (num % 2 == 0) ? printf("%d is even.\n", num) : printf("%d is odd.\n", num);
}


  */


#include<stdio.h>
int main(){
    int num,i,flag=o;
    printf("\n enter num");
    scanf("%d",&num");
        for(i=2;i<=num/2;i++){
        if(num% i==0){
        flag=1;
        }
}