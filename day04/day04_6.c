#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main5() {
	int num = -1;

	do			// do ~ while : 1번은 무조건 실행되게끔 해주는 while문			
	{
		printf("숫자를 입력하세요.(-1 입력시 종료): ");
		scanf("%d", &num);
		if (num == -1) {
			printf("종료합니다.\n");
		}
		else {
			printf("%d을(를) 입력하였습니다.\n", num);
		}
	} while (num != -1);
	return 0;
}