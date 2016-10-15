#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand(static_cast<unsigned int>(time(0)));
	char a[2][2] = { {'1','2'},
	                 {'2','2'}, };
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			cout << a[i][j];
		}
		cout << endl;
	}
	system("pause");
	return 0;

}
