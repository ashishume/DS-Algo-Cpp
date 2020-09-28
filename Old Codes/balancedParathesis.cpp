#include <bits/stdc++.h>

using namespace std;

int findMaxLen(string str)
{
    int n = str.length();
    int res = 0;
    stack<int> stk;
    stk.push(-1);

    int result = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '(')
            stk.push(i);
        else
        {
            stk.pop();

            if (!stk.empty())
                res = max(res, i - stk.top());
            else
                stk.push(i);
        }
    }
    return res;
}
int main()
{
    stack<int> s;
    string str = "(())";
    cout << findMaxLen(str) << endl;
}