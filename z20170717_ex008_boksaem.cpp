#include<stdio.h>

void input();
void add();
void output();

char name[100];
int age;

void input(){
	//scanf("이름을 입력하세요: %s", name);
	printf("이름 :");
	scanf("%s", &name);
	printf("나이 :");
	scanf("%d", &age);
}


void output(){
	printf("name : %s, age : %d\n"
	       ,name, age);
}

main(){
	input();
	output();
}
