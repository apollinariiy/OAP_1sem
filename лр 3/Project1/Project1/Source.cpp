#include <iostream>
#include <iomanip> 
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, probel; probel = ' ';
	cout << "������� ������ "; cin >> c;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(12) << setfill(c) << c << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(12) << setfill(c) << c << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(12) << setfill(c) << c << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(12) << setfill(c) << c << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(12) << setfill(c) << c << endl;
}




