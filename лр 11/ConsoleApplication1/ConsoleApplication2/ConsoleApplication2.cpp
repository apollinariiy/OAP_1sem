#include <iostream>
void main() {
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	const int n = 50;
	int A[n], B[n], S[50], sum, i, size;
	
	cout << "Массив А: " << endl;
	for (i = 0; i < n; i++)
	{
		*(A + i) = rand() % 100;
		cout << " " << A[i];
	}
	cout << endl;
	cout << "Массив B: " << endl;
	for (i = 0; i < n; i++)
	{
		*(B + i) = rand() % 100;
		cout << " " << B[i];
	}
	cout << endl;
	cout << "Массив S: " << endl;
	for (i = 0; i < n; i++)
	{
		sum = A[i] + B[i];
		*(S + i) = sum;
		cout << " " << S[i];
	}
	cout << endl;
}
