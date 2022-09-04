#include <iostream>
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	double d, s;
	cout << "Введите размер диагонали квадрата d=";
	cin >> d;
	s = pow(d,2)/2;
	std::cout << "Площадь квадрата s=" << s;
}
	
