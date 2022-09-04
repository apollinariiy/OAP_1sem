

#include <iostream>

int main()
{
	setlocale(LC_CTYPE, "Russian");
	float m, n, p;
	int k;
	printf("Введите m "); scanf_s("%f", &m);
	printf("Введите n "); scanf_s("%f", &n);
	printf("Введите p "); scanf_s("%f", &p);
	k = 0;
	if (m < 0)
		k = k + 1;
	if (n < 0)
		k = k + 1;
	if (p < 0)
		k = k + 1;
	printf("k = % i\t", k);
}


