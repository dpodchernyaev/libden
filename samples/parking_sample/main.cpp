#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{

	const int AMOUNT_FLOORS = 7; // к-во этажей
	const int AMOUNT_PARKINGS = 10; // к-во парковочных мест на этаже
	int floorsAndParkings[AMOUNT_FLOORS][AMOUNT_PARKINGS]; // объявление двумерного массива

	// присвоение значений и отображение
	printf("~~Таблица мест паркинга (0 - место забронировано)~~");

	for (int f = 0; f < AMOUNT_FLOORS; f++) // используем встроенные циклы
	{
		printf("%d-й этаж:", f + 1);
		for (int p = 0; p < AMOUNT_PARKINGS; p++)
		{
			floorsAndParkings[f][p] = p + 1; // присвоить значение
			printf("%2d|", floorsAndParkings[f][p]);; // сразу показать
		}
		printf("\n---------------------------------------------------\n");
	}

	int floor = 0; // этаж
	int parkingPlace = 0; // парковочное место
	char exit = '1'; // для выхода из do while

	printf("Чтобы забронировать паркинг, выберите этаж и место.\n");

	do // внешний do while
	{
		do // встроенный do while для выбора этажа
		{
			printf("Введите номер этажа: ");
			scanf("%d", &floor);

			if (floor < 1 || floor > 7) // если такого этажа нет
			{
				printf("Такого этажа нет!  Выберите этаж от 1 до 7!\n");
			}
		} 
		while (floor < 1 || floor > 7);


		do // встроенный do while для выбора места
		{
			printf("Введите номер места парковки: ");
			scanf("%d", &parkingPlace);

			if (parkingPlace < 1 || parkingPlace > 10)
			{
				printf("Такого номера нет! Выберите место от 1 до 10!\n");
			}
		} 
		while (parkingPlace < 1 || parkingPlace > 10);

		if (floorsAndParkings[floor - 1][parkingPlace - 1] != 0) // если место свободно
		{
			floorsAndParkings[floor - 1][parkingPlace - 1] = 0; //  отметить, как забронированное
			printf("\n\nБронирование прошло успешно!\n");
			printf("Ваше место парковки: %d-й этаж %d-е место!\n\n ", floor, parkingPlace);
			printf("Забронировать еще - нажмите 1. Выйти - 0: \n");
			scanf("%s", &exit);
		}
		else // если место занято (хранит значение 0)
		{
			printf("\nМесто занято! Выберите другое!\n");

			// отобразить таблицу, чтобы было видно какие места свободны
			printf("~~Таблица мест паркинга (0 - место забронировано)~~\n\n");;

			for (int f = 0; f < AMOUNT_FLOORS; f++)
			{
				printf("%d-й этаж:  ", f + 1);
				for (int p = 0; p < AMOUNT_PARKINGS; p++)
				{
					printf("%2d|", floorsAndParkings[f][p]);
				}
				printf("\n---------------------------------------------------\n");
			}
		}
	} while (exit != '0');

	return 0;
}
