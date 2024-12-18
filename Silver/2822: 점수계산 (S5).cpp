#include <iostream>
#include <algorithm>
using namespace std;

bool compare(const pair<int, int>& a, const pair<int, int>& b)
{
	return a.second < b.second;
}

int main()
{
    
	pair<int, int> arr[9];
	
	for (int i = 1; i <= 8; i++)
	{
		cin >> arr[i].first;
		arr[i].second = i;
	}
	
	sort(arr + 1, arr + 9);

	int sum=0;
	
	for (int i = 4; i <= 8; i++)
	{
		sum += arr[i].first;
	}
	
	cout << sum << '\n';

	sort(arr + 4, arr + 9, compare);
	
	for (int i = 4; i <= 8; i++) 
		cout << arr[i].second << " ";
		
	return 0;
	
}

/*https://www.acmicpc.net/problem/2822*/
