#include <iostream>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    
    int n, m;
    cin >> n >> m;

    map<string,string> arr;
    
    string a,b;
    for(int i=0;i<n;i++)
    {
        cin >> a >> b;

        arr[a] = b;
    }

    for(int i=0;i<m;i++)
    {
        cin >> a;

        cout << arr[a] << '\n';
    }

    return 0;
}

/*https://www.acmicpc.net/problem/17219*/
