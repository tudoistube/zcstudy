#include<stdio.h>
//...http://blog.naver.com/nasu0210/220619649781 
/*
...1.1.정렬.
13425
12345 

 int main(){
	int a[] = {1,3,4,2,5};
	int zsize = sizeof(a)/sizeof(int);
	
	printf("zsize : %d \n", zsize);
	
	for(int i=0; i<zsize; ++i){
		printf("%d", a[i]);
	}
	printf("\nsort begins...\n");
	
	int temp = 0;	
	for(int i=0; i<=4; ++i){
		for(int j=0; j<=4; ++j){
			if(a[i]<a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	for(int i=0; i<5; ++i){
		printf("%d", a[i]);
	}

	return 0;
}
*/

/*
...1.2.정렬 : 함수 형태로 정렬.
13425
12345 

void zsort(int a[], int n);

int main(){
	int a[] = {1,3,4,2,5};
	int zsize = sizeof(a)/sizeof(int);
	
	printf("zsize : %d \n", zsize);
	
	for(int i=0; i<zsize; ++i){
		printf("%d", a[i]);
	}
	printf("\nsort begins...\n");
	
	zsort(a, zsize);
	
	return 0;
}

void zsort(int a[], int n){
	
	int temp = 0;	
	for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
			if(a[i]<a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	for(int i=0; i<n; ++i){
		printf("%d", a[i]);
	}
	return;
}
*/

//...2.구조체와 배열활용 : http://blog.naver.com/nasu0210/220815341861
#define MAX 3
struct sFoodMenu{
	//char *name;
	char name[20];	 
	int price;
	int score; 
};

int main(){
	struct sFoodMenu s[MAX], temp;
//...scanf 문자열 입력받기.
//...http://m.post.naver.com/viewer/postView.nhn?volumeNo=8390343&memberNo=1991839	
//...scanf 구조체 입력받기. 
//...http://kin.naver.com/qna/detail.nhn?d1id=1&dirId=1040101&docId=143373827&qb=c2NhbmYgJiDqtazsobDssrQ=&enc=utf8&section=kin&rank=1&search_sort=0&spq=0&pid=TT/eNdpySDVssco7Zfhssssssbl-451787&sid=GQ/uVenJofGJggVyU/YJXw%3D%3D

	printf("뭐 먹을지 생각나는 1번째 음식이름을 입력하세요 : ");
	scanf("%s", &s[0].name);
	printf("가격은 얼마인가요? : ");
	scanf("%d", &s[0].price);
	printf("음식1이 머릿속에 생각나는 횟수를  1~10 사이의 점수로 메긴다면 몇점인가요? : ");
	scanf("%d", &s[0].score);
	printf("\n\n");
	
	printf("뭐 먹을지 생각나는 2번째 음식이름을 입력하세요 : ");
	scanf("%s", &s[1].name);
	printf("가격은 얼마인가요? : ");
	scanf("%d", &s[1].price);
	printf("음식2이 머릿속에 생각나는 횟수를  1~10 사이의 점수로 메긴다면 몇점인가요? : ");
	scanf("%d", &s[1].score);
	printf("\n\n");
		
	printf("뭐 먹을지 생각나는 3번째 음식이름을 입력하세요 : ");
	scanf("%s", &s[2].name);
	printf("가격은 얼마인가요? : ");
	scanf("%d", &s[2].price);
	printf("음식3이 머릿속에 생각나는 횟수를  1~10 사이의 점수로 메긴다면 몇점인가요? : ");
	scanf("%d", &s[2].score);
	printf("\n\n");
	
	printf("오늘 뭐먹을까 생각난 음식이름, 가격 그리고 생각나는 점수\n");		
	for(int i=0; i<MAX; ++i){
		printf("%d. 음식이름 : %s | 가격 : %d | 점수 : %d \n"
		       , i, s[i].name, s[i].price, s[i].score);		
	}
	
	printf("\n\n");
	printf("점수 순으로 정렬했으니 고민하지 말고 맛있게 먹자^_____^!!!\n");

	/*
	for(int i=0; i<MAX; ++i){
		for(int j=0; j<MAX; ++j){
			if(s[i].score<s[j].score){
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
	*/
	for(int i=0; i<MAX; ++i){
		for(int j=0; j<MAX; ++j){
			if(s[i].score>s[j].score){
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
	
	for(int i=0; i<MAX; ++i){
		printf("%d순위 음식 이름: %s 가격: %d 생각나는 점수 : %d \n"
		       , i, s[i].name, s[i].price, s[i].score);
	}	
	
	return 0;
}

//...다음 적용 과제. 
//...구조체 포인터. 
//...http://blog.naver.com/skout123/50132236162
//...구조체 배열과 구조체 포인터.
//...http://blog.naver.com/skout123/50132243574



