#include<stdio.h> 
void test(int a, int b);
void test2(int *a, int *b);
int main(){
	int a = 7;
	int b = 5;
	printf("a:%d b:%d \n",a, b);
	printf("&a:%d &b:%d \n",&a, &b);
	test(a, b);
	test2(&a, &b);
}

void test(int a, int b){
	printf("test : &a:%d &b:%d \n",&a, &b);
}


void test2(int *a, int *b){
	printf("test2 : a:%d b:%d \n",a, b);
	//printf("test2 : &a:%d &b:%d \n",&a, &b);
}
