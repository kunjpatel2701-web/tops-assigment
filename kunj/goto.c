#include <stdio.h>

int main(void) {
    int age;

    printf("Enter your age: ");
    if (scanf("%d", &age) != 1) {
        return 1;
    }

    if (age < 18) {
        goto not_eligible;
    }

    printf("You are eligible for vote.\n");
    return 0;

not_eligible:
    printf("You are not eligible for vote.\n");
    return 0;
}

