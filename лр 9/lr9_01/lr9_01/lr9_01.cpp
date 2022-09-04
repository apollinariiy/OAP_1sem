#include <iostream>
#include <ctime>
void main()
{
	
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	const int N = 100;
	int i, sz, A[N], k;
	int rmn = 0, rmx = 99;
	cout << "Введите размер массива ";
	cin >> sz;
	cout << "Массив А:" << endl;
	srand((unsigned)time(NULL));
	for (i = 0; i < sz; i++)
	{
		A[i] = (int)(((double)rand() /
			(double)RAND_MAX) * (rmx - rmn) + rmn);
		// или A[i] = rand() % rmx; - для [0, rmx) 
		cout << A[i] << endl;
	}
	cout << "Введите порядковый номер элемента:" << endl;
	cout << "k: ";
	cin >> k;
	k--;
	for (int i = k; i < sz - 1; i++)
	{
		A[i] = A[i + 1];
	}
	A[sz - 1] = 0; //Часто в целях безопасности
	cout << "Массив после удаления элемента:" << endl;
	for (int i = 0; i < sz - 1; i++)
	{
		cout << A[i] << " ";
	}
}



