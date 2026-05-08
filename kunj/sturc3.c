#include <stdio.h>

struct material {
    char color[10];
    char brand[10];
};

struct materials {
    char mname[10];
};       

struct product {
    int pid;
    char pname[10];
    struct material d1;
    struct materials m1;
};

int main(void) {
    struct product p1;

    printf("\n enter the pid and pname: ");
    scanf("%d %9s", &p1.pid, p1.pname);

    printf("\n enter the color, brand and mname: ");
    scanf("%9s %9s %9s", p1.d1.color, p1.d1.brand, p1.m1.mname);

    printf("\n product details \n");
    printf("\n pid=%d productname=%s", p1.pid, p1.pname);
    printf("\n color=%s brand=%s", p1.d1.color, p1.d1.brand);
    printf("\n mname=%s\n", p1.m1.mname);

    return 0;
}


