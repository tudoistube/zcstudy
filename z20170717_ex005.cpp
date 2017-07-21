#include<stdio.h>

void add();
void add2(int a, int b);

main(void){
	int t=11;
	int m=t/2+1;
	int k=0;
	for(int i=1; i<=t; ++i){
		if(i<=m){
			++k;
		}else{
			--k;
		}
		for(int n=1; n<=m-k; ++n){
			printf(" ");
		}
		for(int j=1; j<=k*2-1; ++j){
			printf("*");
		}
		printf("\n");
	}
}
