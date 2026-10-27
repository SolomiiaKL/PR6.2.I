#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;

// Функція формування масиву випадковими числами (наприклад, з діапазону [-10, 10])
void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

// Функція виведення масиву
void Print(const int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}

// Функція обчислення суми елементів з непарними індексами (ітераційний спосіб)
int SumOddIndices(const int* a, const int size)
{
	int sum = 0;
	for (int i = 1; i < size; i += 2)
	{
		sum += a[i];
	}
	return sum;
}

int main()
{
	srand((unsigned)time(NULL));
	const int n = 10;       
	int a[n];
	int Low = -10;          
	int High = 10;          

	Create(a, n, Low, High);
	cout << "Started massiv:\n";
	Print(a, n);

	int totalSum = SumOddIndices(a, n);
	cout << "Sum of elements with odd indices = " << totalSum << endl;

	return 0;
}