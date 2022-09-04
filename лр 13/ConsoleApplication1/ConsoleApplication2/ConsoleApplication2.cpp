
#include <iostream> 
#include <cstdlib> 
#include <ctime>  
#include <iomanip>
using namespace std;

int main()
{
    setlocale(0, "rus");
    const int N = 3; // размер матрицы
    const int M = 3;
    int i, j, s=0;
    int matrix[N][M];
    int index_i, index_j; // индексы расположения
    int max;              // максимальный элемент

    srand((unsigned)time(0));

    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            matrix[i][j] = rand() % 100; // заполняем матрицу случайными числами

    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
        {
            if (j % 5 == 0)
                cout << endl;
            cout << setw(3) << matrix[i][j]; // выводим на экран
        }

    max = matrix[0][0]; // присваиваем первый элемент

    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
        {
            s = s + matrix[i][j];
        }
    cout << endl << endl;
    cout << "Сумма:" << s << endl;
    if (s % 2 == 0)
        cout << "Сумма четная";
    else
        cout << "Сумма нечетная";
    cout << endl;

    system("Pause");

    return 0;
}