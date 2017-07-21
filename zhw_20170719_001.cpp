//...20170719.서윤석.
//...http://blog.naver.com/nasu0210/220618114829.

#include <stdio.h>

/*
1
22
333
4444
55555

 int main(){
	int i, j;
	for(i=1; i<=5; i++){
		for(j=1; j<=i; j++){
			printf("%d", i);
		}		
		printf("\n");
	}
	return 0;
}
*/

/*
1
12
123
1234
12345

 int main(){
	int i, j;
	for(i=1; i<=5; i++){
		for(j=1; j<=i; j++){
			printf("%d", j);
		}		
		printf("\n");
	}
	return 0;
}
*/

/*
A
AB
ABC
ABCD
ABCDE

 int main(){
	int i, j;	
	int n=65;
	//printf("%c",n);
	//printf("%c",n+1);
	for(i=0; i<=5; i++){
		for(char j=0; j<=i; j++){
			printf("%c", n+j);
		}		
		printf("\n");
	}
	return 0;
}
*/

/*
12345
23451
34512
45123
51234

 int main(){
	int i, j, n;	

	for(i=1; i<=5; i++){
		for(j=i; j<=5; j++){
			printf("%d", j);
		}
		
		for(n=1; n<=(i-1); n++){
			printf("%d", n);
		}
		printf("\n");
	}
	return 0;
}
*/

/*
...elapsed 27min --;; 
    A
   BBB
  CCCCC
 DDDDDDD
EEEEEEEEE

 int main(){
	int i, j, m, q;	
	int n=65;
	//printf("%c",n);
	//printf("%c",n+1);
	for(i=0; i<5; i++){
		for(q=(4-i); q>0; q--){
			printf(" ");
		}	
		if(i==0){
			m=0;
		}else{
			m=2*i;
		}
		for(j=0; j<=m; j++){
			printf("%c", n+i);
		}		
		printf("\n");
	}
	return 0;
}
*/

/*
...소수구하기. 
...elapsed 27min, but failed. --;;
*/
 int main(){
	int i, j, m;
	int n=0;	
	bool bli=false;
	
	for(i=1; i<100; i++){

		for(j=1; j<=i; j++){
			m = i%j;
			if(m==0){
				n++;
			}			
		}	
		
		if(n==2){
			printf("%d \n", i);
		}
		
		n=0;
		
	}
	return 0;
}

//...http://blog.naver.com/nasu0210/220619649781 
/*
...정렬.(풀이중) 
13425
12345 
#include <stdlib.h>
 int main(){
	int arrN[] = {1,3,4,2,5};
	int tmp;
	
	int zsize = sizeof(arrN)/sizeof(int);
	int arrN2[zsize];
	printf("zsize : %d", zsize);
	
	for(int n=0; n<=zsize; n++){
		printf("%2d %2d \n", arrN[n], &arrN[n]);
	}
	printf("new array... \n");
	//...http://kin.naver.com/qna/detail.nhn?d1id=1&dirId=1040101&docId=277202494&qb=Y+yWuOyWtCDrsLDsl7Qg7YGs6riw&enc=utf8&section=kin&rank=1&search_sort=0&spq=0&pid=TTIvawpySEKssthCKfZssssss94-236313&sid=NcRnwEXIs00d3O74D05beg%3D%3D
	//arrN2 = (int *)malloc(sizeof(int)*zsize);
	
	for(int n=0; n<=zsize; n++){
		arrN2[n] = arrN[n];
		printf("%2d %2d \n", arrN2[n], &arrN2[n]);
	}
	
	free(arrN2);
	
	return 0;
}
*/

