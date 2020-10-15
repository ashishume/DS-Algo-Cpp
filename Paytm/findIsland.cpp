#include <bits/stdc++.h>

using namespace std;
void DFS(vector<int> A[], int i, int j, int row, int col)
{

    if (i < 0 || i >= row || j < 0 || j >= col || A[i][j] == 0)
        return;
    A[i][j] = 0;
    DFS(A, i, j, row, col);
    DFS(A, i + 1, j, row, col);
    DFS(A, i - 1, j, row, col);
    DFS(A, i, j + 1, row, col);
    DFS(A, i, j - 1, row, col);
    DFS(A, i + 1, j + 1, row, col);
    DFS(A, i - 1, j - 1, row, col);
    DFS(A, i - 1, j + 1, row, col);
    DFS(A, i + 1, j - 1, row, col);
}

int main()
{

    vector<int> A[3] = {
        {1, 1, 0},
        {1, 0, 1},
        {1, 0, 1}};
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (A[i][j] == 1)
            {
                DFS(A, i, j, 3, 3);
                count++;
            }
        }
    }
    cout << count;

    return 0;
}