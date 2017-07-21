#include<stdio.h>

typedef struct{
	char name[20];
	int no;
}sNameList;

/*
int main(){
	sNameList s;
	sNameList *ptr1;
	printf("Name : ");
	scanf("%s", &s.name);
	printf("\nNumber : ");
	scanf("%d", &s.no);
	
	printf("\n포인터OFF,이름 : %s | 번호 : %d \n",s.name, s.no);
	
	ptr1 = &s;
	printf("\n(*구조체포인터이름).멤버이름");
	//...잘안씀. 
	printf("포인터ON,이름 : %s | 번호 : %d \n"
	       ,(*ptr1).name, (*ptr1).no);
	//...이렇게 표현함. 
	printf("\n구조체포인터이름->멤버이름");	       
	printf("포인터ON,이름 : %s | 번호 : %d \n"
	       ,ptr1->name, ptr1->no);
	
	return 0;
}*/

/*
struct info_person{
	char name[10];
	int age;
	float weight;
};
struct group{
	char schoolName[20];
	char major[20];
	struct info_person *info;
};

int main(void){
	struct info_person inf={"2Be", 20, 62};
	struct group grp={"소놀","코딩마스터"};
	grp.info = &inf;
	
	printf("your input is...\n");
	printf("schoolName : %s \n", grp.schoolName);
	printf("major : %s \n", grp.major);
//...구조체포인터:http://blog.naver.com/myroom9/220249065886	
	printf("name : %s \n", (*grp.info).name);
	printf("age : %d살 \n", (*grp.info).age);
	printf("weight : %.1fKg \n", (*grp.info).weight);
	
	return 0;	
} 
*/

//...포인터 : http://blog.naver.com/beta700/221045696507
int main(){
	int a=5;
//...*포인트값변수 =&포인트주소변수.
	int *c=&a;
	printf("c의 포인터 결과 %d \n",*c);
	return 0;
}
