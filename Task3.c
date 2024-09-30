#include <stdio.h>
#include <locale.h>

int main()

{
	setlocale(LC_ALL, "RUS");

	char c;

	printf("Введите знак препинания: \n");

	scanf("%c", &c);//считывание с консоли введённого символа

	switch (c)

	{

	case '.':

		printf("Это точка\n");

		break;

	case ',':

		printf("Это запятая\n");

		break;

	case ';':

		printf("Это точка с запятой\n");

		break;

	case ':':

		printf("Это двоеточие\n");

		break;

	case '...':

		printf("Это многоточие\n");

		break;

	case '!':

		printf("Это восклицательный знак\n");

		break;

	case '?':

		printf("Это вопросительный знак\n");

		break;

	case '-':

		printf("Это тире\n");

		break;

	case '(':

		printf("Это открывающая скобка\n");

		break;

	case ')':

		printf("Это закрывающая скобка\n");

		break;

	case '""':

		printf("Это кавычки\n");

		break;

	case '"':

		printf("Это кавычки\n");

		break;
	default:

		printf("Неизвестный символ\n");

	}

	return 0;

}