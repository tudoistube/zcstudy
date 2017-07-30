#include <stdio.h>
/*
...S.1+2+3+...+100 까지의 합계 구하기(Section010). 

int main()
{
	int i, j;
	i=0, j=0;
	do {
		i++;
		j += i;
	}while( i < 100 );
	
	printf("1+2+3+...+100 까지의 합계 구하기(Section010). \n");
	printf("1~%d까지 수를 합하면 : %d \n", i, j);
	
	return 0;
}
...E.1+2+3+...+100 까지의 합계 구하기(Section010).  */

/*
...S.1+3+5+...+99 까지의 합계 구하기(Section010). 

int main()
{
	int i, j;
	i=1, j=0;
	do {
		j += i;
		i = i + 2;		
	}while( i < 100 );
	
	printf("1+3+5+...+99 까지의 합계 구하기(Section010) \n");
	printf("1~%d까지 홀수를 합하면 : %d \n", i, j);
	
	return 0;
}
...E.1+3+5+...+99 까지의 합계 구하기(Section010).*/

/*
...S.1-2+3-4+5-6...+99-100 까지의 합계 구하기(Section011). 
int main()
{
	int i, temp, j;
	i = 0; temp = 0; j = 0;
	do {
		++i;		
		if((i%2) == 0){
			temp = i*(-1);
		}else{
			temp = i;
		}
		j = j + temp;
		printf("i = %d | temp = %d | j = %d \n", i, temp, j);
	}while( i < 100 );
	
	printf("1-2+3-4+5-6...+99-100 까지의 합계 구하기(Section011) \n");
	printf("i = %d | temp = %d | j = %d \n", i, temp, j);
	
	return 0;
}
...E.1-2+3-4+5-6...+99-100 까지의 합계 구하기(Section011). */

/*
...S.1-2+3-4+5-6...-98+99 까지의 합계 구하기(Section011). 

int main()
{
	int i, temp, j;
	i = 0; temp = 0; j = 0;
	do {
		++i;		
		if((i%2) == 0){
			temp = i*(-1);
		}else{
			temp = i;
		}
		j = j + temp;
		printf("i = %d | temp = %d | j = %d \n", i, temp, j);
	}while( i < 99 );
	
	printf("1-2+3-4+5-6...+99-100 까지의 합계 구하기(Section011) \n");
	printf("i = %d | temp = %d | j = %d \n", i, temp, j);
	
	return 0;
}

...E.1-2+3-4+5-6...-98+99 까지의 합계 구하기(Section011).  */

/*
...S.1-2+3-4+5-6...-98+99 까지의 합계 구하기(Section011). 

int main()
{
	//...odd : 양의 합을 저장함.
	//...even : 음의 합을 저장함.
	//...j : 1씩 증가.
	//...k : 짝수, 홀수 판별함.
	//...g : j*s 의 곱이 저장됨.
	//...s : -1, 1을 반복하는 스위치 변수. 
	int even, odd, k, g, s, j;
	
	even = 0, odd = 0, k = 0, g = 0;
	s = -1, j = 1;
	
	do{
		k = j/2 * 2;
		s *= -1;
		g = j*s;
		
		if(k==j){//...짝수인 경우임. 
			even += g;
		}else{
			odd += g;
		}
		j++;
		printf("k=%d | s=%d | j=%d | g=%d \n", k, s, j, g);
	}while(j<=99);
	
	printf("k=%d | s=%d | j=%d | g=%d \n", k, s, j, g);
	
	return 0;
}

...E.1-2+3-4+5-6...-98+99 까지의 합계 구하기(Section011).  
*/


/*
...S.(-1)*2*(-3)*4*(-5)*...*100 까지의 합계 구하기(Section011-03). 

int main()
{
	int i, temp;
	double j;
	i = 0; temp = 0; 
	j = 1.0;
	do {
		++i;		
		if((i%2) != 0){
			temp = i*(-1);
		}else{
			temp = i;
		}
		j = j * temp;
		printf("i = %d | temp = %d | j = %d \n", i, temp, j);
	}while( i < 99 );
	
	printf("(-1)*2*(-3)*4*(-5)*...*100 까지의 합계 구하기(Section011-03) \n");
	printf("i = %d | temp = %d | j = %11.4e \n", i, temp, j);
	
	return 0;
}

...E.(-1)*2*(-3)*4*(-5)*...*100 까지의 합계 구하기(Section011-03).   */

/*
...S.(-1/2)+(2/3)+(-3/4)+(4/5)+(-5/6)*...-(99/100) 까지의 합계 구하기(Section012). 

int main()
{
	float i, j, temp, sum;
	i = 0; j = 0; sum = 0;
	do {
		++i;
		if(((int)i%2) != 0){
			temp = i*(-1);
		}else{
			temp = i;
		}
		j = i+1;
		sum = sum + (temp/j);
		
		printf("temp / j = %f / %f | sum = %f \n", temp, j, sum);
	}while( i < 99 );
	
	printf("(-1/2)+(2/3)+(-3/4)+(4/5)+(-5/6)*...-(99/100) 까지의 합계 구하기(Section012). \n");
	printf("temp / j = %f / %f | sum = %f \n", temp, j, sum);
	
	return 0;
}

...E.(-1/2)+(2/3)+(-3/4)+(4/5)+(-5/6)*...-(99/100) 까지의 합계 구하기(Section012).    */


/*
...S.1+2+4+7+11+16+22+... 로 증가하는 수열의 20번째 항까지의 합계를 구하기(Section013). 
시나공 2017 정보처리기사 실기 1권 실무 알고리즘 응용 3장 기본알고리즘 수열 145p.
http://cafe.gilbut.co.kr/it/qna/qnaView.aspx?seq=415598&page=1&search=title_content&searchword=%EC%88%98%EC%97%B4&qnagubun=A&sergubun1=001000000&sergubun2=001001000&sergubun3=001001002&serbook=&serpart=&sortgubun=&cntTF=T

int main()
{
	//...i : 1, 2, 3, ..., 19
	//...j : 1, 2, 4, 7, 11 ...
	//...k : 1+2+4+7+11 ...
	int i, j, k;
	
	i = 0; j = 1; k = 1;
	
	do{
		i++;
		j+=i;
		k+=j;
		printf("i = %d, j = %d, k = %d \n", i, j, k);
	}while(i<19);
	
	printf("1+2+4+7+11+16+22+... 로 증가하는 수열의 20번째 항까지의 합계를 구하기(Section013).  \n");
	printf("i = %d, j = %d, k = %d \n", i, j, k);
	
	return 0;
}

...E.1+2+4+7+11+16+22+... 로 증가하는 수열의 20번째 항까지의 합계를 구하기(Section013). */


/*
...S.1+3+6+10+15+21+28+... 로 증가하는 수열의 20번째 항까지의 합계를 구하기(Section013-01). 
시나공 2017 정보처리기사 실기 1권 실무 알고리즘 응용 3장 기본알고리즘 수열 148p.
int main()
{
	//...i : 1, 2, 3, ..., 19
	//...j : 1, 2, 4, 7, 11 ...
	//...k : 1+2+4+7+11 ...
	int i, j, k;
	
	i = 0; j = 0; k = 0;
	
	do{
		i++;
		j+=i;
		k+=j;
		printf("i = %d, j = %d, k = %d \n", i, j, k);
	}while(i<20);
	
	printf("1+3+6+10+15+21+28+... 로 증가하는 수열의 20번째 항까지의 합계를 구하기(Section013).  \n");
	printf("i = %d, j = %d, k = %d \n", i, j, k);
	
	return 0;
}

...E.1+3+6+10+15+21+28+... 로 증가하는 수열의 20번째 항까지의 합계를 구하기(Section013-01).
*/


/*
...S.-1+2-4+7-11+16-22... 로 나열되는 수열의 20번째 항까지의 합계를 구하기(Section013-02). 
http://cafe.gilbut.co.kr/it/qna/qnaView.aspx?seq=208291&page=1&search=title_content&searchword=-1%2B2-4%2B7-11&qnagubun=A&sergubun1=001000000&sergubun2=001001000&sergubun3=001001002&serbook=&serpart=&sortgubun=&cntTF=T

int main()
{
	//...i : 증가값(1~19), L : 스위치변수(1 || -1), j : 수열의 각항, k : 합계.
	int i, j, k, L;
	//...초기값을 주고 19번을 돌려서 20번째 항까지 합산함. 
	i = 0; 
	j = 1; 
	L = -1, 
	k = j*L;
	printf("i : %d | j : %d | L : %d | k = %d \n", i, j, L, k);
	
	do{
		i++;
		j+=i;
		L*=-1;
		k += j * L;
		printf("i : %d | j : %d | L : %d | k = %d \n", i, j, L, k);
	}while(i<19);
	
	printf("-1+2-4+7-11+16-22... 로 나열되는 수열의 20번째 항까지의 합계를 구하기(Section013-02).  \n");
	printf("i : %d | j : %d | L : %d | k = %d \n", i, j, L, k);
	
	return 0;
}

...E.-1+2-4+7-11+16-22... 로 나열되는 수열의 20번째 항까지의 합계를 구하기(Section013-02).   */


/*
...S.1!+2!+3!+4!+5!+...+10! 로 나열되는 수열의 10번째 항까지의 합계를 구하기(Section014). 

int main()
{
	//...i : 증가값(1~10), 
	//...j : 1!, 2!, 3!, ... 수열의 각 항. 
	//...k : 합계.
	int i, j, k, L;
	//...초기값을 주고 19번을 돌려서 20번째 항까지 합산함. 
	i = 1; 
	j = 1;  
	k = 1;
	printf("i : %d | j : %d | k = %d \n", i, j, k);
	
	do{
		i++;
		j*=i;
		k += j;
		printf("i : %d | j : %d | k = %d \n", i, j, k);
	}while(i<10);
	
	printf("1!+2!+3!+4!+5!+...+10! 로 나열되는 수열의 10번째 항까지의 합계를 구하기(Section014). \n");
	printf("i : %d | j : %d | k = %d \n", i, j, k);
	
	return 0;
}

...E.1!+2!+3!+4!+5!+...+10! 로 나열되는 수열의 10번째 항까지의 합계를 구하기(Section014).    
*/



/*
...S.1+1+2+3+5+8+13+... 로 나열되는 피보나치 수열의 20번째 항까지의 합계를 구하기(Section015). 

int main()
{
	//...A, B, C : 첫번째, 두번째, 세번째 항. 
	//...CNT, HAP.
	int hap, cnt, c;
	int a = 1, b =1 ; 
	
	hap = a + b; 
	cnt = 2;  
	
	while(1){
		c =a + b;
		hap += c;
		cnt++;
		if(cnt < 20){
			a = b;
			b = c;
		}else{
			printf("hap = %d", hap);
			break;
		}
	}
	
	return 0;
}

...E.1+1+2+3+5+8+13+... 로 나열되는 피보나치 수열의 20번째 항까지의 합계를 구하기(Section015). 
*/


/*
...S.1+1+2+3+5+8+13+... 로 나열되는 피보나치 수열의 20번째 항까지의 합계를 구하기(Section015-01). 

int main()
{
	//...A, B, C : 첫번째, 두번째, 세번째 항. 
	//...CNT, HAP.
	int hap, cnt, c;
	int a = 1, b =1 ; 
	
	hap = a + b; 
	printf("몇번째 항목까지 계산할까요? ");
	scanf("%d", &cnt);
	
	for(int i=3; i<=cnt; i++){
		c =a + b;
		hap += c;
		a = b;
		b = c;
		printf("%d번째, hap = %d \n", i, hap);
	}
	
	return 0;
}

...E.1+1+2+3+5+8+13+... 로 나열되는 피보나치 수열의 20번째 항까지의 합계를 구하기(Section015-01). 
*/

/*
...S.1+1+2+3+5+8+13+... 로 나열되는 피보나치 수열의 20번째 항까지의 합계를 구하기(Section015-01). 

int main()
{
	//...A, B, C : 첫번째, 두번째, 세번째 항. 
	//...CNT, HAP.
	int hap, cnt, c;
	int a = 1, b =1 ; 
	
	hap = a + b; 
	printf("몇번째 항목까지 계산할까요? ");
	scanf("%d", &cnt);
	
	for(int i=3; i<=cnt; i++){
		c =a + b;
		hap += c;
		a = b;
		b = c;
		printf("%d번째, hap = %d \n", i, hap);
	}
	
	return 0;
}

...E.1+1+2+3+5+8+13+... 로 나열되는 피보나치 수열의 20번째 항까지의 합계를 구하기(Section015-01). 
*/


/*
...S.(77*1)+(76*2)+(75*3)+...+(2*76)+(1*77) 로 나열되는 수열. 

int main()
{
	//...p: 1씩 증가되는 숫자가 저장될 변수. 
	//...q: 1씩 감소되는 숫자가 저장될 변수.
	//...m: 각항의 값이 저장될 변수.
	//...h: 각항의 값이 계산되어 저장될 변수. 
	int p = 0, q, m;
	double h;
	
	do{
		p++;
		q = 78 - p; //...77부터 1씩 감소시킴. 
		m = q*p;
		h+=(double)m;
		//...printf format : http://blog.naver.com/zlaehdn/220754569070
		printf("p=%d | q=%d | m=%d | h=%lf \n", p, q, m, h);
	}while(p<77);
	
	return 0;
}

...E.(77*1)+(76*2)+(75*3)+...+(2*76)+(1*77) 로 나열되는 수열. 
*/


/*
...S.1+(1/1)+(1/2)+(1/3)+...+(1/10) 로 나열되는 수열. 

int main()
{
	//...a : 분모값, d: 분수값. 
	float hap, a, d;
	hap = 1, a =1;
	
	do{
		d = 1/a;
		hap += d;
		a++;
		printf("a=%f, d=%f, hap=%.2f \n", a, d, hap);
	}while(a<=10);
	
	return 0;
}

...E.1+(1/1)+(1/2)+(1/3)+...+(1/10) 로 나열되는 수열. 
*/

/*
...S.임의의 수를 입력받아 소수인지 판별하기(Section016-01). 

int main()
{
	//...a : 입력받는 수.
	//...i : a 보다 1 작은 수가 저장됨.
	//...j : 2부터 i까지 1씩 증가되는 숫자가 저장됨. 
	int a, i, j;
	
	printf("소수인지 판단해야할 숫자를 입력하시오 : ");
	scanf("%d", &a);
	
	i = a - 1;
	j = 2;
	while(1){
		if(j<=i){
			if((a%j)==0){
				printf("a%j : %d\%%d, 소수가 아님 \n", a, j);
				break;
			}else{
				j++;
			}
		}else{
			printf("소수임 \n");
			break;
		}
	}	
	
	return 0;
}

...E.임의의 수를 입력받아 소수인지 판별하기(Section016-01). 
*/


/*
...S.임의의 수를 입력받아 소수인지 판별하기(Section016-02). 

int main()
{
	//...a : 입력받는 수.
	//...j : 2부터 a까지 1씩 증가되는 숫자가 저장됨. 
	int a, j;
	
	printf("소수인지 판단해야할 숫자를 입력하시오 : ");
	scanf("%d", &a);
	
	j = 2;
	while(a%j !=0){
		j++;
	}	
	if(a==j){
		printf("소수임 \n");
	}else{
		printf("소수가 아님 \n");
	}
	
	return 0;
}

...E.임의의 수를 입력받아 소수인지 판별하기(Section016-02). 
*/


/*
...S.임의의 수를 입력받아 소수인지 판별하기(Section016-03). 

#include <math.h>
int main()
{
	//...a : 입력받는 수.
	//...j : 2부터 a까지 1씩 증가되는 숫자가 저장됨. 
	int a, j;
	
	printf("소수인지 판단해야할 숫자를 입력하시오 : ");
	scanf("%d", &a);
	
	j = 2;
	
	while(1) {
		if(j<=sqrt(a)){
			if(a%j == 0){
				//...퍼센트(%)출력 : http://blog.naver.com/gamees/10095421735 
				printf("a%%j = %d%%%d : 소수 아님 \n", a, j);
				break;
			}
			else{
				j++;
			}
		}else{
			printf("소수임\n");
			break;
		}
	}
	
	return 0;
}

...E.임의의 수를 입력받아 소수인지 판별하기(Section016-03). 
*/


/*
...S.임의의 수를 입력받아 그 안에 포함된 소수의 합 구하기(Section017). 

int main()
{
	//...a : 입력받는 수.
	//...j : 소수인지 판별할 때 사용할 재수가 저장될 변수. 
	//...k : 소수인지 판별할 숫자가 저장될 변수(if A = 10, then k = 2 ~10). 
	//...hap : 소수가 누적될 변수. 
	int a, hap, j, k;
	
	printf("임의의 수를 입력받아 그 안에 포함된 소수의 합 구하기 : ");
	scanf("%d", &a);
	hap = 0;
	k = 2;
	
	while(1){
		j = 2;
		while(k%j !=0 ){
			j++;
		}
		if(k==j){ //...소수임. 
			hap+=k;
			printf("k=%d | j = %d | hap = %d \n", k, j, hap);
		}
		if(k<a){
			k++;
		}else{
			printf("hap = %d \n", hap);
			break;
		}
		
	}
	
	
	
	return 0;
}

...E.임의의 수를 입력받아 그 안에 포함된 소수의 합 구하기(Section017). 
*/

/*
...S.배열 a[99] 에 2~100 사이의 정수를 담고, 이 배열 안에 포함된 소수의 갯수 구하기(Section018). 
	시나공 2017 정보처리기사 실기 1권 실무 알고리즘 응용 3장 기본알고리즘 수열 179p.
	
int main()
{
	//...a[99] : 2~100 을 담는 배열.
	//...k : 2부터 100까지 1씩 증가하는 값. 
	//...i : 배열의 위치.
	//...j : 소수의 개수를 저장됨.
	//...m : 소수의 배수가 들어있는 위치를 지정할 변수. 
	int k, i, j, m;
	int a[99];
	
	k=1;
	do{
		k++;
		//...배열의 위치가 0부터 시작하므로, 배열 a 의 첫번째 위치인 a[0]에 
		//...k를 저장하기 위해 a[k-2]로 지정함. 
		a[k-2] = k;
		int temp = k-2;
		printf("a[%d] = %d \n", temp, k);
	}while(k<100);
	
	//...배열 a 의 첨자 i 는 i++ 수행후 0이 되도록 -1로 초기화함. 
	i=-1, j=0;
	
	printf("소수 판별 시작...\n");
	while(1){
		i++;
		//...c언어는 배열의 위치가 0부터 시작하므로, i 는 0~98까지 99번 반복함. 
		if(i>98){
			printf("소수의 개수 : %d", j);
			break;
		}
		
		if(a[i]==0){
			continue;
		}
		j++;
		m = i;
		while(1){
			m += a[i];
			if(m>99) break;
			printf("a[%d] = %d \n",m, a[m]);
			a[m] = 0;
		}
	}
	return 0;
}

...E.배열 a[99] 에 2~100 사이의 정수를 담고, 이 배열 안에 포함된 소수의 갯수 구하기(Section018). 
*/


/*
...S.두수를 입력받아 두수의 최대공약수, 최소공배수를 구하기 : 유클리드 호제법(Section019).  

int main()
{
	//...유클리드 호제법 : gcm(최대공약수) = a * b / lcm(최소공배수). 
	int a, b, big, small, mok, nameji, gcm, lcm;
	printf("최대공약수와 최소공배수를 구할 두수를 입력하세요. ");
	scanf("%d %d", &a, &b);
	
	if(a>=b){
		big = a ;
		small = b;
	}else{
		big = b;
		small = a;
	}
	
	while(1){
		mok = big/small;
		nameji = big - mok*small;
		if(nameji == 0){
			gcm = small;
			lcm = a*b/gcm;
			printf("최대공약수 = %d | 최소공배수 = %d \n", gcm, lcm);
			break;
		}
		big = small;
		small = nameji;
	}
	
	return 0;
}

...E.두수를 입력받아 두수의 최대공약수, 최소공배수를 구하기 : 유클리드 호제법(Section019).  
*/


/*
...S.약수를 구하기(Section020).  

int main()
{
	int b, mok, nameji, i;
	int a[100];
	
	printf("약수를 구할 수를 입력하세요 : ");
	scanf("%d", &b);
	//...배열의 시작이 0부터 되도록 d 를 -1 로 정의함. 
	int c = 0, d = -1;
	
	while(1){
		c++;
		if(c <= b){
			mok = b / c;
			nameji = b - mok*c;
			printf("mok = %d | b = %d | c = %d | nameji = %d \n", mok, b, c, nameji);
			if(nameji == 0){
				d++;
				a[d] = c;
				printf("a[%d] = %d \n", d, c);
			}
		}else{
			printf("%d 의 약수는 \t", b);
			for(i=0; i<=d; i++){
				printf(" %d\t", a[i]);
			}
			break;
		}
	}
	
	return 0;
}

...E.약수를 구하기(Section020).  
*/


/*
...S.소인수 분해하기(Section021).  
	시나공 2017 정보처리기사 실기 1권 실무 알고리즘 응용 3장 기본알고리즘 수열 188p. 

#include <math.h>
int main()
{
	int b, c, d, e, mok, nameji, originInput;
	int a[100];
	
	printf("소인수 분해를 구할 수를 입력하세요 : ");
	scanf("%d", &b);
	originInput = b;
	
	c = -1; //...배열a[0]부터 시작하게 함.
	d = 2;
	
	while(1){
		e = (int)sqrt(b); //...제곱근을 정수로 받음.
		
		while(1) {
			if(d>e){
				d = b;
				break;
			}
			mok = b/d;
			nameji = b - mok*d;
			
			if(nameji == 0){
				break;
			}else{
				d++; //...b를 나눌 수를 증가시킴. 
			}
		}
		c++;
		a[c] = d;
		printf("소인수 a[%d] = %d \n", c, d);
		if(b == d){
			break;
		}
		b = mok;
	}
	printf("%d 를 소인수 분해 결과 \n", originInput);
	for(int i=0; i<=c; i++){
		printf("%d \t", a[i]);
	}
	
	return 0;
}

...E.소인수 분해하기(Section021).  
*/


/*
...S.10진수를 2진수로 변환하기(Section022).  
	시나공 2017 정보처리기사 실기 1권 실무 알고리즘 응용 3장 기본알고리즘 수열 191p. 
*/
#include <math.h>
int main()
{
	int b, bInputted, c, mok, nmg, i;
	int a[10];
	printf("2진수로 변환할 수를 입력하세요.");
	scanf("%d", &b);
	bInputted = b;
	c = -1; //...a[0]부터 시작하기 위함. 
	
	do{
		c++;
		mok = b / 2;
		nmg = b -mok * 2;
		a[c] = nmg;
		b = mok;
		
	}while( mok !=0 );
	
	printf("입력받은 수 %d 를 2진수로 변환한 결과 \n", bInputted);
	
	for(i = c; i >=0; i--){
		printf("%d", a[i]);
	}
	
	return 0;
}
/*
...E.진법변환하기(Section022).  
*/


/*
...S.진법변환하기(Section022-01).  
	시나공 2017 정보처리기사 실기 1권 실무 알고리즘 응용 3장 기본알고리즘 수열 195p. 
     2로 나눈 나머지를 배열의 끝쪽부터 저장하면 출력할 때 앞에서부터 차례대로 출력할 수 있음. 

#include <math.h>
int main()
{
	int b, bInputted, c, mok, nmg, k, i;
	int a[10];
	
	
	printf("2진수로 변환할 수를 입력하세요 : ");
	scanf("%d", &b);
	bInputted = b;
	
	c = -1; //...a[0]부터 시작하도록 하기 위한 초기값 지정.
	do{
		c++;
		mok = b/2;
		nmg = b - mok *2;
		
		printf("c = %d | nmg = %d \n", c, nmg);
		//...배열의 뒤쪽부터 차례대로 저장되록 a[zsize-c]로 지정함. 
		a[c] = nmg;
		b = mok;
		
	} while(mok!=0);
	
	printf("2진수로 변환할 수 : %d \n", bInputted);
	//...배열의 위치가 0부터 시작하므로 2진수가 든 첫번째 위치를 구함. 
	k = 9 - c;
	printf("%d = 9 - %d \n", k, c);
		
	for(i=k; i<10; i++){
		printf("%d", a[i]);
	}
	
	
	return 0;
}

...E.진법변환하기(Section022-01).  
*/

















