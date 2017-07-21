#include<stdio.h>
void input();
int age;

main(){
	input(); 
	int s=60;
	if((age>=6)&&(age<12))printf("초등학생입니다!");
	else if((age>=13)&&(age<15)) printf("중학생입니다!");
	else if((age>=16)&&(age<19)) printf("고등학생입니다!");
	else if(age>=19) printf("대학생입니다!");
}


void input(){
	//scanf("이름을 입력하세요: %s", name);
	printf("나이를 입력하세요 :");
	scanf("%d", &age);
	printf("나이 : %d\n", age);
}

