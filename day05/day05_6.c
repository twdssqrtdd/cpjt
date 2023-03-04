#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main5() {

	// 포인터 : 변수의 위치를 기억하는 변수(가리킨 변수의 주소값 저장하는 공간)
	// 포인터 : 가리키다. 변수 또는 함수 주소를 가리킴
	// C언어는 운영체제를 만들기 위해(유닉스, 위도우즈, 안드로이드, 맥OS...)만들어진 문법
	// 미래에 어떤 프로그램이 만들어질지, 어떤 신규 기능이 추가될지 알 수 없음
	// num변수를 사용해라 ==> 이곳에 위치할 변수를 동작시켜라
	// main함수를 사용해라 ==> 이곳에 위치할 함수를 동작시켜라
	
	int num = 10;							// num변수의 주소를 저장
	int* p_num = &num;						// num변수가 위치한 주소를 p_num 포인터변수에 저장해라 --> *
	
	// & : 주소참조자
	// * : 역참조
	printf("역참조 : %d\n", *p_num);					// p_num이 갖고있는 주소에 들어가라 --> *
	printf("주소값 : %p\n", p_num);						// 주소값
	printf("주소값 : %p\n", &num);						// 주소값
	printf("변수값 : %d \n", num);						// num 값
	
	
	
	
	return 0;

}