#include <iostream>
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	double d, s;
	cout << "������� ������ ��������� �������� d=";
	cin >> d;
	s = pow(d,2)/2;
	std::cout << "������� �������� s=" << s;
}
	
