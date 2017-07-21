//...for문:http://blog.naver.com/nasu0210/220627881417
#include<stdio.h>
/*
...1.1~10까지 3자리 정수 출력하기. 

int main(){
	for(int i=1; i<11;++i){
		printf("%2d",i);
		//printf("%3d",i);
	}
	
	return 0;
}
*/
/*
...2.1~10까지 홀수만 출력하기. 

int main(){
	for(int i=1; i<11;i=i+2){
		printf("%2d",i);
		//printf("%3d",i);
	}
	
	return 0;
}
*/

/*
...3.1~10까지 짝수만 출력하기. 
*/
int main(){
	for(int i=2; i<11;i=i+2){
		printf("%3d",i);
	}
	
	return 0;
}
