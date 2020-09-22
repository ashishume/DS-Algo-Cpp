#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int shortestPath(int a[10][10], int i, int j, int x, int y)
{
    int rows = sizeof(a) / sizeof(a[0]);
    int cols = sizeof(a[0]) / sizeof(a[0][0]);
    bool vis[rows][cols];
    return shortestPath(a, i, j, x, y, vis);
}

bool isValid(int arr[10][10], int i, int j, bool vis[10][10])
{
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);
    return i > 0 && i < rows && j > 0 && j < cols && arr[i][j] == 1 && !vis[i][j];
}

int shortestPath(int a[10][10], int i, int j, int x, int y, bool vis[10][10])
{
    if (!isValid(a, i, j, vis))
        return 1000000;
    if (i == x && j == y)
        return 0;

    vis[i][j] = true;
    int left = shortestPath(a, i, j - 1, x, y, vis) + 1;
    int bottom = shortestPath(a, i + 1, j, x, y, vis) + 1;
    int right = shortestPath(a, i, j + 1, x, y, vis) + 1;
    int top = shortestPath(a, i - 1, j, x, y, vis) + 1;

    vis[i][j] = false;

    return min(min(left, bottom), min(right, top));
}

int main()
{

    int arr[10][10] = {
        {1, 1, 1, 1, 1, 0, 0, 1, 1, 1},
        {0, 1, 1, 1, 1, 1, 0, 1, 0, 1},
        {0, 0, 1, 0, 1, 1, 1, 0, 0, 1},
        {1, 0, 1, 1, 1, 0, 1, 1, 0, 1},
        {0, 0, 0, 1, 0, 0, 0, 1, 0, 1},
        {1, 0, 1, 1, 1, 0, 0, 1, 1, 0},
        {0, 0, 0, 0, 1, 0, 0, 1, 0, 1},
        {0, 1, 1, 1, 1, 1, 1, 1, 0, 0},
        {1, 1, 1, 1, 1, 0, 0, 1, 1, 1},
        {0, 0, 1, 0, 0, 1, 1, 0, 0, 1},
    };

    int result = shortestPath(arr, 0, 0, 0, 9);
    cout << result;
}
