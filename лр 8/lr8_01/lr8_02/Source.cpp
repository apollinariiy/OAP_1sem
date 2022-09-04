#include <stdio.h>
#include <iostream>
using namespace std;
void main()
{
	float a, b, n = 200, h, s1=0,s2=0, x,z;
	cout << "Enter two numbers A and B: \n";
	cin >> a >> b;
	h = (b-a)/2*n;
	x = a+2*h;
	for (int i = 1; i < n; i++ ) {
		s2 = s2 + pow(x, 3)-3;
		x = x + h;
		s1 = s1 + pow(x, 3)-3;
		x = x + h;
	}
	z = (h / 3) * (pow(a, 3) - 3 + 4 * (pow(a + h, 3) - 3 + 4 * s1 + 2*s2 + pow(b, 3) - 3));
	cout << z;
}
