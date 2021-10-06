//Jatin's Binary Search 
#include <iostream>
using namespace std;
void BinarySearch(int A[], int N, int no)
{
    int start = 0, end = N - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (A[mid] == no)
        {
            cout << "NUMBER FOUND";
            exit(0);
        }
        else if (no > A[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }
    cout << "NO. NOT FOUND";
}
int main()
{
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    int no;
    cin >> no;
    BinarySearch(A, N, no);
    return 0;
}
