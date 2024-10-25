#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n,k;
	cin>>n>>k;
	
	queue<int>arr;
	
	for (int i=1;i<=n;i++)
	    arr.push(i);

	cout<<'<';

	while (arr.size()>1)
	{
		for (int i=1;i<k;i++)
		{
			int tmp=arr.front();
			arr.pop();
			arr.push(tmp);
		}
		
		cout<<arr.front()<<", ";
		arr.pop();
	}
	
	cout<<arr.front()<<'>'<<'\n';
	
	return 0;
}

/*https://www.acmicpc.net/problem/1158*/
