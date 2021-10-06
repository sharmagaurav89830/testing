#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Enter the size of array";
    cin >> N;
    int A[N];
    cout << "Enter the values of array";
    for (int j = 0; j < N; j++)
        cin >> A[j];
    for (int i = 1; i < N; i++)
    {
        int current = A[i];
        int j = i - 1;
        while (A[j] > current && j>=0)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = current;
    }
    for (int k = 0; k < N; k++)
        cout << A[k] << " ";
    return 0;
}