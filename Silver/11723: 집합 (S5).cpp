#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    string arr;
    int m, bit = 0;
    while (n--)
    {
        cin >> arr;
        if (arr == "add")
        {
            cin >> m;
            bit |= (1 << m);
        }
        else if (arr == "remove")
        {
            cin >> m;
            bit &= ~(1 << m);
        }
        else if (arr == "check")
        {
            cin >> m;
            if (bit & (1 << m))
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        }
        else if (arr == "toggle")
        {
            cin >> m;
            bit ^= (1 << m);
        }
        else if (arr == "all")
        {
            bit = (1 << 21) - 1;
        }
        else if (arr == "empty")
        {
            bit = 0;
        }
    }

    return 0;
}

/*https://www.acmicpc.net/problem/11723*/
