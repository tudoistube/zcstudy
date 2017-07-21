#include<stdio.h>

void input();
void add();
void output();

int a, b;
int sum;

void input(){
	scanf("%d%d", &a,&b);
}

void add(){
	sum = a + b;
};

void output(){
	printf("%d + %d = %d \n"
	       ,a, b, sum);
}

int main(){
	input();
	add();
	output();
	return 0;
}
