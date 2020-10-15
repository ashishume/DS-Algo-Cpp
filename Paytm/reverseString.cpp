#include <bits/stdc++.h>
#include <string>
#include <bits/stdc++.h>
using namespace std;

string reverseString(string s)
{
    int j = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '.')
        {
            reverse(s.begin() + j, s.begin() + i);
            j = i + 1;
        }
    }
    reverse(s.begin() + j, s.end());
    reverse(s.begin(), s.end());

    return s;
}

int main()
{

    string str = "much.very.program.this.like.ashish";

    string res = reverseString(str);
    cout << res;

    return 0;
}