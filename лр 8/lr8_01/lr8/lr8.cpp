#include<iostream>
#include<math.h>
using namespace std;
void main()

{
	float a, b, e, x, f1, f2, x1;
	cout << "vvedite a ";
	cin >> a;
	cout << "vvedite b ";
	cin >> b;
	e = 0.0001;
	x = a;
	f1 = exp(a) + a - 4;
	f2 = exp(a);
	if (f1 * f2 > 0)
		x1 = a;
	else
		x1 = b;
	while (abs(x1 - x) > e)
	{
		x = x1;
		x1 = x - (exp(x) + x - 4) / (exp(x) + 1);
	}
	cout << x << endl;
}

