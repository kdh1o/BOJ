#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int check(vector<string> board, int x, int y) 
{
    int cnt1 = 0, cnt2 = 0;
    char colr[2] = {'W', 'B'};

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (board[x + i][y + j] != colr[(i + j) % 2])
                cnt1++;
            if (board[x + i][y + j] != colr[(i + j + 1) % 2])
                cnt2++;
        }
    }

    return min(cnt1, cnt2);
}

int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    vector<string> board(n);

    for (int i = 0; i < n; i++) cin >> board[i];

    int chess = 64;

    for (int i = 0; i <= n - 8; i++)
    {
        for (int j = 0; j <= m - 8; j++)
            chess = min(chess, check(board, i, j));
    }

    cout << chess << endl;
    return 0;
}
