#include <iostream>

using namespace std;

int n;
bool fuck(int x);
void dfs(int num, int b);


int main()
{
    
    cin>>n;
    
    dfs(2,1);
    dfs(3,1);
    dfs(5,1);
    dfs(7,1);

    return 0;
}

bool fuck(int x)
{
	for (int i = 2; i <= x/2; i++)
	{
		if (x%i == 0)
			return false;
	}
	return true;
}

void dfs(int num, int b)
{
	if (b == n)
	{
		cout << num << "\n";
		return;
	}
	for (int i = 1; i <= 9; i+=2)
	{
		if (fuck(num * 10 + i))
			dfs(num * 10 + i, b + 1);
	}

	return;
}

/*https://www.acmicpc.net/problem/2023*/
