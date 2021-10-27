#include <iostream>
using namespace std;
int main()
{
    int r, i, j, s;
    cout << "Enter number of rows: ";
    cin >> r;
    for (i = r; i >= 1; i--)
    {
        //for loop to put space in pyramid
        for (s = i; s < r; s++)
            cout << " ";
        //for loop to print star in pyramid
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (i == r || j == 1 || j == 2 * i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
        return 0;
    }