#include <iostream>

using namespace std;

int func(int n)
{
    if (n == 0)
        return 0;
    return n % 10 + func(n / 10);
}
int main()
{
    int s = func(876);
    cout << s;
    return 0;
}