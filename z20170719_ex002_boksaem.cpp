/*
...硅凯. 
*/
#include<stdio.h> 
/*
int main(){
	//int a[5]={10,11,12,13,14};
	int a[5];
	a[0]=10;
	a[1]=11;
	a[2]=12;
	a[3]=13;
	a[4]=14;
	
	printf("%d \n", a);//林家.
	printf("%d \n",a[0]);//a[0]
	printf("%d \n",sizeof(int));//
	printf("------\n");
	for(int i=0;i<sizeof(a)/sizeof(int);++i){
		printf("%d\n",&a[i]);//林家 
	}
	
	return 0;
}
*/
int getMax(int *k, int count);
int getMin(int *k, int count);
int main(){
	int a[6]={77,90,88,68,100,70};
	int count = sizeof(a)/sizeof(int);
	for(int i=0; i<count; ++i){
		printf("a=%d\n", a[i]);
	}
	printf("----------\n");
	//int max = getMax(a,count);
	int min = getMin(a,count);
	//printf("林家 %d \n", a);
	//printf("林家蔼 %d \n", *a);
	//printf("getMax = %d \n", max);
	printf("getMin = %d \n", min);
	return 0;
}

//int getMax(int *k){
int getMax(int k[], int count){	
	int temp = k[0];
	for(int i=0; i<count; ++i){
		//printf("k=%d\n", k[i]);
		if(k[i] > temp){
			temp = k[i];
		}
	}	
	printf("temp = %d \n", temp);
	printf("----------\n");	
	return temp;
}
int getMin(int *k, int count){
	int temp = k[0];
	for(int i=0; i<count; ++i){
		//printf("k=%d\n", k[i]);
		if(temp > k[i] ){
			temp = k[i];
		}
	}	
	printf("temp = %d \n", temp);
	printf("----------\n");	
	return temp;
}













