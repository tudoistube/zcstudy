//...Á¤·Ä: http://blog.naver.com/nasu0210/220619649781
#include<stdio.h>
/*
main(){
	int a[5]={1,3,4,2,5};
	for(int i=0; i<5; ++i){
		printf("%d", a[i]);
	}
	printf("\n");
	
	int temp=0;
	for(int i=0; i<=4; ++i){
		for(int j=0; j<=4; ++j){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0; i<5; ++i){
		printf("%d", a[i]);
	}
}
*/
void zsort(int a[]);

main(){
	int a[5]={1,3,4,2,5};
	for(int i=0; i<5; ++i){
		printf("%d", a[i]);
	}
	printf("\nsort starts...\n");
	
	zsort(a);

	for(int i=0; i<5; ++i){
		printf("%d", a[i]);
	}
}

void zsort(int a[]){
	int temp=0;
	for(int i=0; i<=4; ++i){
		for(int j=0; j<=4; ++j){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}	
}
