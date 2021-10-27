// C++ code to demonstrate printing pattern of numbers
#include <iostream>
using namespace std;

// Function to demonstrate printing pattern
void numpat(int n)
{
    // Initialising starting number
    int num = 1;

    // Outer loop to handle number of rows
    // n in this case
    for (int i = 0; i < n; i++)
    {

        // Inner loop to handle number of columns
        // values changing acc. to outer loop
        for (int j = 0; j <= i; j++)
        {

            // Printing number
            cout << num << " ";

            // Incrementing number at each column
            num = num + 1;
        }

        // Ending line after each row
        cout << endl;
    }
}

// Driver Code
int main()
{
    int n = 5;

    // Function Call
    numpat(n);
    return 0;
}
