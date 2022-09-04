#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	float c=2.1, r=4e-4, j, h, y;
	int m = 7;
	for (int n = 1; n <= 4; n++)
	{
		printf("¬ведите j ");
		scanf_s("%f", &j);
		h = (10*r-j)/(pow(c,2)+(exp(-m)));
		y = (h*m-pow(j,2))+pow((0.1*c),2);
		printf("h = %5.2f\t", h);
		printf("y = %5.2f\n", y);
	}
}
