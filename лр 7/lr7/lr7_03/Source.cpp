#include <stdio.h>
#include <cmath>
void main()
{
	float sum = 0, a, t, p;
	for (int n = 2; n < 10; n++)
	{
		t = pow((float)n, log((float)n));
		p = pow(log((float)n), (float)n);
		a = t / p;
		sum += a;
	}
	printf("S=%f\n", sum);
}