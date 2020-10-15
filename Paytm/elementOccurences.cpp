#include <iostream>
#include <unordered_map>

using namespace std;

void freq(int *a, int n)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[a[i]] += 1;
    }

    for (int i =1; i <= n; i++)
    {
        cout << m[i] << " ";
    }
}

int main()
{

    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        freq(a, n);
    }
    return 0;
}