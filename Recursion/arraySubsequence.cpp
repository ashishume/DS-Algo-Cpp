#include <iostream>

using namespace std;

int FindMaxSum(int arr[], int n)
{
    int incl = arr[0];
    int excl = 0;
    int excl_new;
    for (int i = 1; i < n; i++)
    {
        excl_new = incl > excl ? incl : excl;

        incl = arr[i] + excl;
        excl = excl_new;
    }

    return (excl > incl) ? excl : incl;
}
int main()
{
    int arr[] = {5, 5, 10, 100, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << FindMaxSum(arr, n);

    return 0;
}