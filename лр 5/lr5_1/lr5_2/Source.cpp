#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	float c = 2.1, r = 4e-4, j=0, h, y;
	int m = 7;
	while (j < 1.7)
	{
		h = (10 * r - j) / (pow(c, 2) + (exp(-m)));
		y = (h * m - pow(j, 2)) + pow((0.1 * c), 2);
		cout << "j=" << j << "\t";
		cout << " y=" << y << endl;
		j = j + 0.1;
	}
}
