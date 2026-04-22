#include<stdio.h>
int main(){
    int choice;
    float area ,r,length,breadth,base,height;
    printf("Enter your choice : \n1. Area of Circle \n2. Area of Rectangle \n3. Area of Triangle \n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("Enter the radius of the circle : ");
            scanf("%f",&r);
            area = 3.14*r*r;
            printf("Area of Circle is : %f",area);
            break;
        case 2:
            printf("Enter the length and breadth of the rectangle : ");
            scanf("%f%f",&length,&breadth);
            area = length*breadth;
            printf("Area of Rectangle is : %f",area);
            break;
        case 3:
            printf("Enter the base and height of the triangle : ");
            scanf("%f%f",&base,&height);
            area = 0.5*base*height;
            printf("Area of Triangle is : %f",area);
            break;
        default:
            printf("Invalid choice!");
    }
    return 0;
}