#include<iostream>
#include<algorithm>

using namespace std;

int stair[301];
int score[301];

int main()
{
	int n;
	cin >> n;
	for (int i=1;i<=n;i++)
		cin>>stair[i];
	
	score[1]=stair[1];
	score[2]=stair[1]+stair[2];
	
	int a=stair[1]+stair[3];
	int b =stair[2]+stair[3];
	
	score[3] = max(a,b);

	for (int i = 4; i <= n; i++)
	{
		a=score[i-2]+stair[i];
		b=score[i-3]+stair[i]+stair[i-1];
		score[i] = max(a, b);
	}
	
	cout << score[n];
	
	return 0;
}

/*https://www.acmicpc.net/problem/2569*/
