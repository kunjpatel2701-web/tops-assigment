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
*/

    #include <stdio.h>

int main() {
    int age;

    // Input age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Using Ternary Operator to check eligibility
    (age >= 18) ? printf("You are eligible to vote.\n") : printf("You are not eligible to vote.\n");

    return 0;
}


