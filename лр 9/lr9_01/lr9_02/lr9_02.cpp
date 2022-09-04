#include <iostream>
#include <ctime>
void main()
{
	
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	const int N = 100;
	int i,j, sz, A[N], k;
	int rmn = 0, rmx = 99;
	cout << "Введите размер массива ";
	cin >> sz;
	cout << "Массив А:" << endl;
	srand((unsigned)time(NULL));
	for (i = 0; i < sz; i++)
	{
		A[i] = (int)(((double)rand() /
			(double)RAND_MAX) * (rmx - rmn) + rmn);
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
	cout << "Массив после удаления элемента:" << endl;
	for (int i = 0; i < sz - 1; i++)
	{
		cout << A[i] << endl;
	}

	for (int i = 0; i < sz; i++)
	{
		if (A[i] % 2 == 0)//элемент четный
		//сдвиг на 1 элемент вправо
		{
			for (int j = sz; j < i; j--) {
				A[j] = A[j - 1];
				sz++; i++;
				A[i] = 0;
			}
		}
		
	}
	cout << "Массив после удаления элемента:" << endl;
	for (int i = 0; i < sz-1; i++)
	{
		cout << A[i] << endl;
	}
}
