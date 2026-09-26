#include <stdio.h>
#include <locale.h>
#define D 2.54
#define pulgada 2.32166

void task1()
{
	int num;
	puts("введите число");
	scanf_s("%d", &num);
	printf("Введено число %d\n", num);
	int num_2;
	puts("введите второй число");
	scanf_s("%d", &num_2);
	printf("сумма: %d\n", num + num_2);
	printf("разность: %d\n", num - num_2);
	printf("произвдение: %d\n", num * num_2);
	printf("частное: %d\n", num / num_2);
	printf("остаток от деления: %d\n\n", num % num_2);

}

void task2()
{
	int dym;
	float result;
	puts("введите значение");
	scanf_s("%d", &dym);
	result = D * dym;
	printf("%d дюймов - это %.2f см\n", dym, result);
	float result_2;
	result_2 = pulgada * dym;
	printf("%d испанских дюймов - это %.2f см\n\n", dym, result_2);

}

void task3()
{
	float a;
	float b;
	puts("введите два значения");
	scanf_s("%f%f", &a, &b);
	printf("-------------------------------------\n");
	printf("| a * b     | a + b     | a - b     |\n");
	printf("-------------------------------------\n");
	printf(" %f * %f     | %f + %f     | %f - %f     |\n", a, b, a, b, a, b);
	printf("-------------------------------------\n");
	printf("| %f     | %f     | %f     |\n", a * b, a + b, a - b);

}

void main()
{
	setlocale(LC_CTYPE, "RUS");
	task1();
	task2();
	task3();

}