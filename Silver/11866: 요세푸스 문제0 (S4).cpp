#include<iostream>
#include<queue>

using namespace std;

int main()
{
    int n, k;
    queue<int> arr;
    
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	    arr.push(i);

	cout << "<";

	while (arr.size() != 0)
	{
		for (int i = 1; i < k; i++)
		{
			arr.push(arr.front());
			arr.pop();
		}
		cout << arr.front();
		
		if (arr.size() != 1)
		    cout << ", ";
		    
		arr.pop();
	}
	
	cout << ">";

}

/*https://www.acmicpc.net/problem/11866*/
