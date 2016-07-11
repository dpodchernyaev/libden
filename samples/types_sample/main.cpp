#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("int=%d", sizeof(int));
	printf("\nuint=%d", sizeof(uint));
	printf("\nlong=%d", sizeof(long));
	printf("\nlong long=%d", sizeof(long long));
	printf("\nshort=%d", sizeof(short));
	printf("\nfloat=%d", sizeof(float));
	printf("\ndouble=%d", sizeof(double));
	printf("\nlong double=%d", sizeof(long double));
	printf("\nwchar_t=%d", sizeof(wchar_t));
	printf("\nchar=%d", sizeof(char));
	printf("\nbool=%d", sizeof(bool));
	
	exit(0);
}

