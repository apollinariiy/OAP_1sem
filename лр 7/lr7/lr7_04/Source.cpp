#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	float d = 5.5e-4, a;
	float x;
	for (int i = 1; i <= 7; i++)
	{
		printf("¬ведите x ");
		scanf_s("%f", &x);
		a = (exp(x)*sin(x)) / (sqrt(d+cos(x)));
		printf("a = %5.2f\n", a);
	}
}