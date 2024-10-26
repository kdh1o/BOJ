#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
	int n;
	cin >> n;
	
	vector<int> arr(n);

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	sort(arr.begin(), arr.end());

    int m;
    
	cin >> m;
	
	int code;
	for(int i = 0; i < m; i++)
	{
		cin >> code;
		if (binary_search(arr.begin(), arr.end(), code)) 
			cout << 1 << '\n';
		else cout << 0 << '\n';
	}
	
	return 0;
}

/*https://www.acmicpc.net/problem/1920*/
