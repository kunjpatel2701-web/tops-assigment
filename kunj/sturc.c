#include<stdio.h>
struct user
{
    char name[20];
    int uid;
    char email[89];
    int std;
    /* data */
};
int main(){
    struct user u1={"kunj",101,"patelkunj2701@gmail.com",11};
    printf("\n name=%s",u1.name);
    printf("\n uid=%d",u1.uid);
    printf("\n email=%s",u1.email);
    printf("\n std=%d",u1.std);
    
}