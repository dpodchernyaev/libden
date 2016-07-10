#include "sort.h"

/** сортировка методом пузырька */
int sortBubble(int* arr, int n)
{
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
				res++;
			}
		}
	}
	return res;
}

/** сортировка методом Хоара по возрастанию.
 * Считается быстрым и эффективным алгоритмом
 * @param arr массив с целыми числами
 * @param n индек последнего элемента
 * @return количество перестановок */
int sortHoar(int* arr, int n)
{
	int res = 0; // количество перестановок
	int i = 0; // левая часть массива до медианы
	int j = n; // правая часть массива до медианы
	int mediana = arr[n / 2]; // центральный элемент
	int tmp;

	// процедура разделения
	do
	{
		// поиск элемента массива большего медианы
		while ( arr[i] < mediana )
		{
			i++;
		}
		// поиск элемента массива меньшего медианы
		while ( arr[j] > mediana )
		{
			j--;
		}

		if (i <= j)
		{
			// если элементы не равны, то поменять местами
			// больший медианы в левой части и меньший медианы в правой части
			if ( (i != j) || (arr[i] != arr[j]) )
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
				res++;
			}
			// перекинуть указатели на следующие элементы
			i++;
			j--;
		}
	}
	// если не было пересечения
	while ( i <= j );

	// сортировка левой части
	if ( j > 0 )
	{
		res += sortHoar(arr, j);
	}
	// сортировка правой части
	if ( n > i )
	{
		res += sortHoar(&arr[i], n - i);
	}
	return res;
}