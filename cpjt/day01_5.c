#include<stdio.h>

int main4() {
	/*
	�̸�, ����, ��, ��, f ==> ����
	���ں��� : �̸�
	�������� : ��, ��, ��
	���ں��� : f
	*/
	char name[] = "ȫ�浿";			// %s
	int year = 2023;				// %d
	int month = 2;					// %d
	int day = 18;					// %d
	char word = 'f';				// %c
	
	printf("�ۼ��� : %s\n", name);
	printf("�ۼ���¥ : %d.%d.%d\n", year, month, day);
	printf("��� : print%c�� ���ڿ� ���", word);

	return 0;
}