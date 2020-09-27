#include <bits/stdc++.h>

using namespace std;

int findLongest(string str, int first, int last)
{

    if (first == last)
        return 1;
    if (str[first] == str[last] && first == last - 1)
        return 2;

    if (str[first] == str[last])
        return findLongest(str, first + 1, last - 1)+2;
    else
        return max(findLongest(str, first + 1, last), findLongest(str, first, last - 1));
}
int main()
{
    string str = "BBABCBCAB";
    int n = str.length();
    cout << findLongest(str, 0, n - 1) << endl;
}