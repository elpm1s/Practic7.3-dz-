#include <stdio.h>
#include <locale.h>

int main()

{
	setlocale(LC_ALL, "RUS");

	char c;

	printf("������� ���� ����������: \n");

	scanf("%c", &c);//���������� � ������� ��������� �������

	switch (c)

	{

	case '.':

		printf("��� �����\n");

		break;

	case ',':

		printf("��� �������\n");

		break;

	case ';':

		printf("��� ����� � �������\n");

		break;

	case ':':

		printf("��� ���������\n");

		break;

	case '...':

		printf("��� ����������\n");

		break;

	case '!':

		printf("��� ��������������� ����\n");

		break;

	case '?':

		printf("��� �������������� ����\n");

		break;

	case '-':

		printf("��� ����\n");

		break;

	case '(':

		printf("��� ����������� ������\n");

		break;

	case ')':

		printf("��� ����������� ������\n");

		break;

	case '""':

		printf("��� �������\n");

		break;

	case '"':

		printf("��� �������\n");

		break;
	default:

		printf("����������� ������\n");

	}

	return 0;

}