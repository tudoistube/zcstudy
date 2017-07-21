/*
...Struct
http://blog.naver.com/nasu0210/220481159087
E:\WS_CPP\z20170717_ex003.exe
*/

#include <stdio.h>
struct xy{
	int x;
	int y;
};

struct person{
	char name[10];
	int age;
};

int main(void){
	struct xy st1, st2;
	struct person p1;
	
	strcpy_s(p1.name, "Joy");
	p1.age=20;
	
	printf("p1.name :%s,p1.age :%d"
	       , p1.name, p1.age);
	
	return 0;
}
