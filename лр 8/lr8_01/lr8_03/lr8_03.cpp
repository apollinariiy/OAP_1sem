#include<iostream>

#include<math.h>
using namespace std;
void main()
{
	float a, b, e, x, f1, f2;
	cout << "vvedite a ";
	cin >> a;
	cout << "vvedite b ";
	cin >> b;
	e = 0.0001;
	while (abs(a - b) > 2 * e)
	{
		x = (a + b) / 2;
		f1 = exp(x) + x - 4;
		f2 = exp(a) + a - 4;
		if (f1 * f2 <= 0)
			b = x;
		else
			a = x;
	}
	cout << "x = " << x << endl;
}




