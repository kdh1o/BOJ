#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    
    int n;
    cin >> n;

    vector<int> index(n);
    
    long long sum = 0;
    
    map<int, int> arr;

    for (int i = 0; i < n; ++i)
    {
        cin >> index[i];
        
        sum += index[i];
        
        arr[index[i]]++;
    }
    
    // 산술평균
    double mean = static_cast<double>(sum) / n;
    
    mean=round(mean);
    
    if(mean==-0)
        mean=0;
    cout << mean << endl;
        
    // 중앙값
    sort(index.begin(), index.end());
    
    int med = index[n / 2];
    cout << med << endl;

    // 최빈값 계산
    int mode = 0;
    int max = 0;
    vector<int> num;

    for (map<int, int>::iterator it = arr.begin(); it != arr.end(); ++it)
    {
        pair<int, int> p = *it;
        if (p.second > max)
        {
            max = p.second;
            num.clear();
            num.push_back(p.first);
        }
        else if (p.second == max)
            num.push_back(p.first);
    }

    sort(num.begin(), num.end());
    
    mode = num.size() > 1 ? num[1] : num[0];
    cout << mode << endl;

    // 범위 계산
    int range = index[n - 1] - index[0];
    cout << range << endl;

    return 0;
}

/*https://www.a2cmicpc.net/problem/2108*/
