//...숫자출력:http://blog.naver.com/nasu0210/220620556166
#include<stdio.h>
/*
...1. 1×2×3×4×5×6×7....×10= ? 를 구하기. 

int main(){
	int i=0;
	int multi=1;
	for(i=1;i<=10;i++){
		multi=multi*i;
		//printf("i:%d \n",i);
		//printf("%d x ", i);
		printf("%d x ", i);
	}
	printf("\nmulti=%d",multi);
	return 0;
}
*/
/*
...2. 1/2+2/3+3/4.....+99/100= ? 를 구하기.
*/
int main(){
	int son = 0;
	int mom = 0;
	float k=0;
	float sum=0;
	for(int i=1;i<=99;i++){
		son=i;
		mom=i+1;		
		//printf("%d/%d \n",son,mom);
		k=(float)son/mom;
		sum = sum + k;
		printf("%d/%d = %f, %f \n",son,mom,k,sum);
	}
	return 0;
}
