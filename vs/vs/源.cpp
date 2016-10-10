#include<iostream>
using namespace std;
int main()
{
	cout << "counting firward:\n";
	for (int i = 0; i < 10; ++i)
	{
		cout << i << "";
	}
	cout << "\n\nCounting backward:\n";
	for (int i = 9; i >= 0; --i)
	{
		cout << i << "";
	}
	cout << "\n\nCounting by fives:\n";
	for (int i = 0; i <= 50; i += 5)
	{
		cout << i << "";
	}
	cout << "\n\nCounting with null statements:\n";
	const int ROWS = 5;
	const int COLUMNS = 3;
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLUMNS; ++j)
		{
			cout << i << "," << j << "";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}