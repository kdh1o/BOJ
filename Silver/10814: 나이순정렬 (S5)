#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    vector<pair<pair<int, int>, string>> arr(n);

    for (int i = 0; i < n; ++i){
        int age;
        string name;
        cin >> age >> name;
        arr[i] = {{age, i}, name};
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; ++i)
        cout << arr[i].first.first << " " << arr[i].second << endl;

    return 0;
}
