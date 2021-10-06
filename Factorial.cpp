#include <iostream>
using namespace std;

int main()
{
	int a, t;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{

		int product = 1;
		cin >> a;
		for (int j = a; j > 0; j--)
		{
			product *= j;
		}
		cout << product << "\n";
	}
	return 0;
}
