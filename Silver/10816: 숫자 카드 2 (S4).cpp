#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map <int, int> arr;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    
	cin >> n;
	
	int card;
	for (int i = 0; i < n; i++)
	{
		cin >> card;
		arr[card]++;
	}
	
	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> card;
		cout << arr[card] << " ";
	}
	
	return 0;
}
