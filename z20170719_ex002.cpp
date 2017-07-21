//...마름모 : http://blog.naver.com/nasu0210/220615068564 
#include<stdio.h>

/*
main(){

	char a='*';
	int m = 5;
	
	for(int i=0; i<=5; i++){
		for(int n=5;n>i;n--){
			printf(" ");
		}
		for(int j=0; j<(2*i+1);j++){
			printf("*");
		}
		printf("\n");
	}
	for(int i=5; i>=0; i--){
		for(int n=i;n<5;n++){
			printf(" ");
		}
		for(int j=0; j<(2*i+1);j++){
			printf("*");
		}
		printf("\n");
	}
}
*/
main(){

	int t=11;//...전체행. 
	int m = t/2+1;//...중간줄.
	int k=0; 
	
	for(int i=1; i<=t; i++){	
		if(i<=m){
			++k;
		}else{
			--k;
		}
		//...공백출력. 
		for(int n=1; n<=m-k; ++n){
			printf(" ");
		}
		//...별출력.
		for(int j=1; j<=2*k-1; ++j){
			printf("*");
		}
		printf("\n");
	}
}



















