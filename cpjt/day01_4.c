#include<stdio.h>

int main3() {
	/*
	변수에는 종류가 있다(자료형)
	한글자변수, 숫자변수, 소수점있는 숫자 변수, 여러글자 변수
	문자변수(한글자) : char;
	정수변수(소수점 없는 숫자) : int;
	실수변수(소주점이 있는 숫자) : double;
	문자열 변수(여러 글자 숫자) : char multi[];
	자료형 사용이유 : 1. 개발자의 의도를 명확하게 전달
					  2. 개발자의 실수를 컴파일러가 검출해내기 위해서  
					  3. 자료형마다 공간의 크기가 다름(최적화)
	*/
	char one = "A";										// %c
	int number1 = 123;									// %d
	double number2 = -3.14;								// %f
	char multi[100] = "99글자까지 저장 가능합니다.";   // %s

		char 변수1;
	return 0 ;
}