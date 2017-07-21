/*
...Call by value¿Í Call by reference
http://blog.naver.com/nasu0210/220478112030
E:\WS_CPP\z20170717_ex002.exe
*/

#include <stdio.h>
void byValue(int a, int b){
	int imsi=a;
	a=b;
	b=imsi;
	printf("swap and print out %d %d \n"
	       , a, b);
}


void byRef(int *a, int *b){
	int imsi=*a;
	*a= *b;
	*b=imsi;
	printf("swap and print out %d %d \n"
	       , *a, *b);
}

int main(){
	int a = 7;
	int b = 5;
	printf("call by Value \n");
	printf("befor %d %d \n"
	       , a, b);
	byValue(a, b);
	printf("after %d %d \n"
	       , a, b);
	
	printf("call by Reference \n");
	printf("befor %d %d \n"
	       , a, b);
	byRef(&a, &b);
	printf("after %d %d \n"
	       , a, b);
	       
	return 0;
}
