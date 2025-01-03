#include <iostream>
#include <map>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    
    int n, m;
    
    cin >> n >> m;
    
    string arr[100004];
    
    map<string, int> mp;
    
    string tmp;
    for (int i = 1; i <= n; i++)//문제부분
    {
        cin >> tmp;
        arr[i] = tmp;
        mp[tmp] = i;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> tmp;
        
        if (atoi(tmp.c_str()) == 0)
            cout << mp[tmp] << '\n';

        else 
            cout << arr[atoi(tmp.c_str())] << '\n';
    }

  return 0;
}

/*https://www.acmicpc.net/problem/1620*/
