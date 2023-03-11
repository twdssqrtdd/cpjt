#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

// 구조체
struct menu {
	char* name[50];				// 메뉴의 이름
	int price;					// 메뉴의 가격
};

int main1() {

	// 구조체
	// 프로그래밍 언어의 발전 : 업데이트(유지보수)

	// 변수 : 차후 수정을 위해 값을 저장해놓는 공간
	// 배열 : 같은 주제의 변수들을 일렬로 집합
	// 함수 : 코드를 저장하는 공간
	// 구조체 : 배열이 같은 자료형으로만 만들어지는 점을 극복(개발자가 직접 만드는 자료형)

	// 카페 메뉴와 가격을 보관
	// (1) 변수
	char* menu1 = "아메리카노", * menu2 = "에스프레소", * menu3 = "카페라떼", * menu4 = "카페모카", * menu5 = "카라멜 마끼야또";
	int price1 = 1500, price2 = 1000, price3 = 2500, price4 = 2500, price5 = 3000;

	// (2)배열
	char* menu[5] = { "아메리카노", "에스프레소", "카페라떼", "카페모카", "카라멜 마끼야또" };
	int price[5] = { 1500, 1000, 2500, 2500, 3000 };

	// char* 와 int 를 묶을 수 없을까?  ==> 제공된 자료형으로 사용자가 다시 만드는 자료형(구조체)
	// (3)구조체
	struct menu coffee = {"아메리카노", 1500};						// 자료형 : struct menu, 변수명 : coffee
	struct menu cafe[5] = { { "아메리카노", 1500 }, {"에스프레소", 1000}, {"카페라떼", 2500 }, {"카페모카", 2500 }, {"카라멜 마끼야또", 3000 } };
	printf("메뉴이름 : %s, 가격 : %d\n", coffee.name, coffee.price);
	coffee.price = 2000;
	printf("메뉴이름 : %s, 가격 : %d\n", coffee.name, coffee.price);


	return 0;
}