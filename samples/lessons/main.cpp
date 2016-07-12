#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *arg[])
{
	/*
 	for (int j = 0; j < 10; j++)
	{
		printf("\n счетчик номер = %d", j + 1);
	}
	*/
	
	int j = 0;

	printf("\n Введите число: ");
	scanf("%d", &j);
	printf("\n Число: %d \n", j);
/*
	do
	{
		printf("\n счетчик номер = %d", j + 1);
		j++;
	}
	while (j < 10);
*/
/*
	for (int i = 0; i < ...; i++)
	{
	}
*/

	const arrSize = 10;
	int arr[arrSize];
	for (int i = 0; i < arrSize; i++)
	{
		arr[i] = i + 1;
	}
	
/*
	int summ = 8;
	int a = 0;	
	while (summ < 10)
	{
		summ = summ + a;
		a++;
		printf("\n %d", summ);
	}
	if (summ == 10)
	{
		printf("\n summ=10");		
	}
	else
	{
		printf("\n Error summ= %d", summ);		
	}
*/

	exit(0);
	return 0;
}

// 5308292@gmail.com

