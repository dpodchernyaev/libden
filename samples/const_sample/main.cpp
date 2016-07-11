#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 10;
	const int j = 10;

	i += 10;
	//j += 10; ошибка чтения
	
	printf("i = %d, j = %d\n", i, j);
	exit(0);
}

