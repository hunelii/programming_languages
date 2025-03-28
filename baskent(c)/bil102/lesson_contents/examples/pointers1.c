#include <stdio.h>
void swap(int * , int * );

int main(){
	
	int x,y;
	int *p = &x;
	printf("Enter value of x:");
	scanf("%d", &x);
	
	printf("Value of x is %d\n", x);
	// printf("*x is %d\n", *x); ERROR
	printf("Value of x is %d\n",*p);
	printf("Value of p is %p\n", p);
	printf("Value of p is %d\n", p);
	printf("Address of p is %d\n", &p);
	
	printf("Addres of x is %d", &x);
	x=45;
	y=33;
	printf("\nx=%d  y= %d\n", x,y);
	swap(&x,&y);
	printf("x=%d  y= %d", x,y);
	return 0;
}

void swap(int *a, int *b){
	
	
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;	
}
