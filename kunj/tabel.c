#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter the size of the table: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%4d", i * j);
        }
        putchar('\n');
    }

    return 0;
}
