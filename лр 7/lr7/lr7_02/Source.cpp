#include <iostream>
using namespace std;
//������ �������� ���������� b � ���� �������� ������, ��� �������� ���������� m, ���������� �� �������� ���������� b
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int COUNT = 5;
	float b, m = 9999;
	for (int i = 1; i <= COUNT; i++)
	{
		cout << "������� b" << i << endl;
		cin >> b;
		if (b < m) m = b;
	}
	cout << "����� " << m << endl;
}
