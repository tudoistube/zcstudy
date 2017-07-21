/*
...http://blog.naver.com/nasu0210/220616964949
   1.1-2+3-4+5.......+99-100의 합계를 구하기.
   2.1+2+4+7+.... 20번째 항까지 합계를 구하기.
*/
#include<stdio.h>

/*
main(void){
	int sum=0;
	int i=0;
	for(i=1;i<=100;++i){
		if(i% 2==0)sum=sum -i;
		else sum=sum + i;
	}
	printf("%d", sum);
}

main(){
	int i=0; 
	int sum=1; 
	int total=1;
	do{
		i=i+1;
		sum=sum+i;
		total=total+sum;
	}while(i<19);
	printf("%d", total);
}
*/
main(){
	int sum=1;
	int total=1;
	for(int i=1; i<20; ++i){
		sum=sum+i;
		total=total+sum;
	}
	printf("%d", total);
}
