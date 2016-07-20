#include <stdio.h>
#include <stdlib.h>

#include <iostream> 
#include <time.h>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
void clearScreen()
{
	HANDLE hOut;
	COORD Position;

	hOut = GetStdHandle(STD_OUTPUT_HANDLE);

	Position.X = 0;
	Position.Y = 0;
	SetConsoleCursorPosition(hOut, Position);
}

void printField(int **mass, int rc, int cc)
{
	clearScreen();
	for (int i = 0; i < rc; i++)
	{
		for (int j = 0; j < cc; j++)
		{
			if (mass[i][j] == 1)
			{
				printf("* ");
			}
			else if ( (j == 0) && (i == 0)
				 || (j == cc - 1) && (i == rc - 1)
				 || (j == 0) && (i == rc - 1)
				 || (j == cc - 1) && (i == 0) )
			{
				printf("+ ");
			}
			else if ( (j == 0) || (j == cc - 1) )
			{
				printf("| ");
			}
			else if (i == 0)
			{
				printf("- ");
			}
			else if (i == rc - 1)
			{
				printf("- ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}

int getLastKey()
{
	int lastKey = -1;
	while (_kbhit())
	{
		lastKey = _getch();
	}
	return lastKey;
}

int main()
{
	int rc = 30;
	int cc = 30;

	int realRc = rc + 2;
	int realCc = cc + 2;

	int posx = rc / 2;
	int posy = cc / 2;

	int **field = new int*[realRc];
	for (int i = 0; i < realRc; i++)
	{
		field[i] = new int[realCc];
		memset(field[i], 0, sizeof(int) * realCc);
	}

	int dx = 1;
	int dy = 0;

	printField(field, realRc, realCc);
	char c = ' ';
	do
	{
		c = getLastKey();

		field[posy][posx] = 0;

		if (c == 'w')
		{
			dy = -1;
			dx = 0;
		}
		if (c == 's')
		{
			dy = 1;
			dx = 0;
		}
		if (c == 'a')
		{
			dy = 0;
			dx = -1;
		}
		if (c == 'd')
		{
			dy = 0;
			dx = 1;
		}

		posx += dx;
		posy += dy;

		field[posy][posx] = 1;
		printField(field, realRc, realCc);

		if ( (posx == 0) || (posx == realCc - 1)
			 || (posy == 0) || (posy == realRc - 1) )
		{
			field[posy][posx] = 1;
			printField(field, realRc, realCc);
			printf("GAME OVER!!");
			c = 'q';
		}
		Sleep(100);
	}
	while(c != 'q');

	printf("EXIT...");

	exit(0);
	return 0;
}

