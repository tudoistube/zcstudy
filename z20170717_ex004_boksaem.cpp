#include<stdio.h>

void add();
void add2(int a, int b);

main(void){
	//add();
	add2(10, 5);
}

void add(void){
	int a=5;
	int b=7;
	printf("sum : %d", a+b);
	return;
}

void add2(int a, int b){
	printf("sum : %d", a+b);
	return;
}

