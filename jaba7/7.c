#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()

{
	setlocale(LC_ALL, "RUS");
	char k,c,l;
	printf("������� ������:");
	scanf("%c", &k);

	switch (k)
	{
	case '0':
		printf("������� ����� '0'\n");
		break;
	case '1':
		printf("������� ����� '1'\n");
		break;
	case '2':
		printf("������� ����� '2'\n");
		break;
	case '3':
		printf("������� ����� '3'\n");
		break;
	case '4':
		printf("������� ����� '4'\n");
		break;
	case '5':
		printf("������� ����� '5'\n");
		break;
	case '6':
		printf("������� ����� '6'\n");
		break;
	case '7':
		printf("������� ����� '7'\n");
		break;
	case '8':
		printf("������� ����� '8'\n");
		break;
	case '9':
		printf("������� ����� '9'\n");
		break;

	default:
		printf("������� �����\n");

	}
//2
	
	float x, y;
	puts("������� ������");
	scanf("%f%c%f", &x, &c, &y);
	switch (c)
	{
	case '+':
		printf("%.1f + %.1f =%.1f\n",x,y,x+y);
		break;
	case '-':
		printf("%.1f - %.1f =%.1f\n", x, y, x - y);
		break;
	case '*':
		printf("%.1f * %.1f =%.1f\n", x, y, x * y);
		break;
	case '/':
		printf("%.1f / %.1f =%.1f\n", x, y, x / y);
		break;
	default:
		printf("Error");

	}
//3
	/*
	puts("������� ������:");
	scanf("%c", &l);

	switch (l)
	{
	case '0':
		printf("zero\n");
		break;
	case '1':
		printf("one\n");
		break;
	case '2':
		printf("two\n");
		break;
	case '3':
		printf("three\n");
		break;
	case '4':
		printf("four\n");
		break;
	case '5':
		printf("five\n");
		break;
	case '6':
		printf("six\n");
		break;
	case '7':
		printf("seven\n");
		break;
	case '8':
		printf("eight\n");
		break;
	case '9':
		printf("nine\n");
		break;
	default:
		printf("������� �����\n");

	}
*/
}