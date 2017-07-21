#include <stdio.h>;

//...특수문자 출력.
//...http://codeup.kr/JudgeOnline/problem.php?id=1006 
//...http://codeup.kr/JudgeOnline/problem.php?id=1007
//...http://codeup.kr/JudgeOnline/problem.php?id=1010
int main(){
	
	printf("특수문자 : %!%@%#%$%%%^%&%*%(%)");
	printf("\n");
	printf("특수문자 : C:%\Download\\hello.cpp\n");
	/*
	int a;
	printf("숫자를 입력하세요. ");
 	scanf("%d",&a);
 	printf("입력한 값: %d", a);

	char chA;
	printf("문자를 입력하세요. ");
 	scanf("%c",&chA);
 	printf("입력한 값: %c", chA);
 	*/
 	
//...http://codeup.kr/JudgeOnline/problem.php?id=1013
//...http://codeup.kr/JudgeOnline/problem.php?id=1014
	/*
	int nA, nB, nTemp;
	scanf("%d %d", &nA, &nB);
	printf("입력받은 수 : %d %d \n", nA, nB);
	nTemp = nA;
	nA = nB;
	nB = nTemp;
	printf("바뀐 결과 : %d %d", nA, nB);
	*/
	/*
	char cA, cB, cTemp;
	scanf("%c %c", &cA, &cB);
	printf("입력받은 수 : %c %c \n", cA, cB);
	cTemp = cA;
	cA = cB;
	cB = cTemp;
	printf("바뀐 결과 : %c %c", cA, cB);	
	*/

//...http://codeup.kr/JudgeOnline/problem.php?id=1015
	float fA;
	printf("실수(float) 한 개를 입력받아 소수점 이하 3째 자리에서 반올림 하여 2째 자리까지 출력하시오. \n");
	scanf("%.2f\n", &fA);
	printf("입력받은 수 : %.2f \n", fA);
	printf("바뀐 결과 : %.2f \n", fA);	
	
	return 0;
}

