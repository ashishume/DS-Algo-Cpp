// C++ program to find and print longest
// substring without repeating characters.
#include <bits/stdc++.h>

using namespace std;

// Function to find and print longest
// substring without repeating characters.
// string findLongestSubstring(string str)
// {
//     int i;
//     int n = str.length();
//     int startingPoint = 0;
//     int currlen;
//     int maxlen = 0;
//     int start;
//     unordered_map<char, int> pos;
//     pos[str[0]] = 0;
//     for (i = 1; i < n; i++)
//     {
//         if (pos.find(str[i]) == pos.end())
//             pos[str[i]] = i;
//         else
//         {
//             if (pos[str[i]] >= startingPoint)
//             {
//                 currlen = i - startingPoint;
//                 if (maxlen < currlen)
//                 {
//                     maxlen = currlen;
//                     start = startingPoint;
//                 }
//                 startingPoint = pos[str[i]] + 1;
//             }
//             pos[str[i]] = i;
//         }
//     }
//     if (maxlen < i - startingPoint)
//     {
//         maxlen = i - startingPoint;
//         start = startingPoint;
//     }
//     return str.substr(start, maxlen);
// }

int lengthOfLongestSubstring(string s)
{
    int n = s.size();
    if (s.size() == 0)
        return 0;
    int i = 0, j = 0;
    vector<int> cnt(326, 0);
    cnt[s[0]]++;
    int ans = 1;
    while (j != n - 1)
    {
        if (cnt[s[j + 1]] == 0)
        {
            j++;
            cnt[s[j]]++;
            ans = max(ans, j - i + 1);
        }
        else
        {
            cnt[s[i]]--;
            i++;
        }
    }
    return ans;
}

// Driver function
int main()
{
    string str = "GEEKSFORGEEKS";
    cout << lengthOfLongestSubstring(str);
    return 0;
}
