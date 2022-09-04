#include <iostream>
using namespace std;
void main()
{
	float c = 2.1, r = 4e-4, m = 1, j, h, y;

	for (int n = 1; n <= 4; n++)
	{
		printf("¬ведите j ");
		scanf_s("%f", &j);
		while (m < 2)
		{
			h = (10 * r - j) / (pow(c, 2) + (exp(-m)));
			y = (h * m - pow(j, 2)) + pow((0.1 * c), 2);
			cout << "j=" << j << "\t";
			cout << "m=" << m << "\t";
			cout << " y=" << y << endl;
			m = m + 0.5;
		}
		m = 1;
	}
}