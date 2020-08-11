#include <bits/stdc++.h>

using namespace std;

int checkMissing(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        count++;
        if (count != arr[i])
            return count;
    }
    return count;
}

int main()
{
    int arr[4] = {1, 2, 3, 5};
    int s = sizeof(arr) / sizeof(arr[0]);
    int missing = checkMissing(arr, s);
    cout << missing;
    return 0;
}