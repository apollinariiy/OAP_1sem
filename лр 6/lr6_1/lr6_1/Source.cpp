
#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	double b = -0.05, a = 1.72, i=-5,d,z;
	int m = 5;
	while(i<5){
		if (i > 3 * b)
			d = a + b * i;
		else d = tan(b) - a * i;
		z = (d * a / 4) / (3 * a * b - exp(1 + d) / 100);
		printf("i=%f\t", i);
		printf("d=%f\t", d);
		printf("z=%5.2f\n", z);
		i = i + 2;
	}
}
