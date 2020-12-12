#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int const t = 10;
	int a[t], r = 1;
	for (int i = 0; i < t; i++)
	{
		a[i] = rand() % 101;
		cout << setw(3) << a[i];
	}
	for (int i = 0; i < t; i++)
	{
		if (a[i] / 3 == 0 || a[i] / 9 == 0)
			r = r * a[i];
	}
	cout << endl;
	cout  << r;
	system("pause");
	return 0;
}