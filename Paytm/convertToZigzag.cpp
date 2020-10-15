#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void zigzag(int *a, int n)
{
    bool flag = true;
    for (int i = 0; i <= n - 2; i++)
    {
        if (flag)
        {

            if (a[i] > a[i + 1])
                swap(a[i], a[i + 1]);
        }
        else
        {
            if (a[i] < a[i + 1])
                swap(a[i], a[i + 1]);
        }
        flag = !flag;
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
int main()
{

    int a[] = {4, 3, 7, 8, 6, 2, 1};
    zigzag(a, 7);
    return 0;
}