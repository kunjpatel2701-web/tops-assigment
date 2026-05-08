#include<stdio.h>
int main(){
	int a=10;
	int *ptr;
	ptr = &a;
	*ptr = 12;
	
	printf("\n value of a=%d",a);
	
	
}