#include <stdio.h>
#include <iostream>
using namespace std;
void main()
{
	float a, b, n=200, h, s, x;
	cout << "Enter two numbers A and B: \n";
	cin >> a >> b;
	h = (b - a) / n;
	x = a;
	while (x<(b-h)) {
		s = s + h * (pow(x, 3) - 3 + pow(x + h, 3)) / 2;
		x = x + h;
	}
	cout << z;
}
