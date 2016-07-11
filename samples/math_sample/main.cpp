#include <stdio.h>
#include <stdlib.h>

int main()
{
	int v1; ///< первое значение
	int v2; ///< второе значение
	printf("Введите первое число: ");
	scanf("%d", &v1);
	printf("Введите второе число: ");
	scanf("%d", &v2);

	printf("Сумма %d + %d = %d\n", v1, v2, v1 + v2);
	exit(0);
}

