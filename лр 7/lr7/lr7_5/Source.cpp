#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	float a=1.5, b=-4.15, v, w;
	for (int i = 1; i <= 5; i++)
	{
		printf("¬ведите v ");
		scanf_s("%f", &v);
		if (v > 0) w = a + v;
		else w = b / v;
		printf("h = %5.2f\t", w);
	}
}