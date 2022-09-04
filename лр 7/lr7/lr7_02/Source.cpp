#include <iostream>
using namespace std;
//¬вести значение переменной b и если значение меньше, чем значение переменной m, преравн€ть ей значение переменной b
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int COUNT = 5;
	float b, m = 9999;
	for (int i = 1; i <= COUNT; i++)
	{
		cout << "¬ведите b" << i << endl;
		cin >> b;
		if (b < m) m = b;
	}
	cout << "ќтвет " << m << endl;
}
