#include <iostream>

void main()
{
	using namespace std;

	setlocale(LC_CTYPE, "Russian");
	float a, sum = 0, pr=1, prk=1,f=1; int i,k;
	const int size = 4;
	for (i = 1; i <= size; i++)
	{
		cout << "¬ведите a" << i << endl;
		cin >> a;
		sum = sum + a;
		pr = pr * a;
		prk = prk * a * a;
	}
	cout << "¬ведите k"  << endl;
	cin >> k;
	for (i = 1; i <= k; i++)
	{
		
		f = f *i;
		
	}
	printf("sum=%f\t", sum);
	printf("pr=%5.2f\n", pr);
	printf("prk=%5.2f\n", prk);
	printf("f=%5.2f\n", f);

}