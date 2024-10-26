#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	while (1)
	{
		string n;
		getline(cin, n);

		if (n == ".")
			break;

		stack<char> arr;

		bool check = 0;

		int len = n.length();
		for (int i = 0; i < len; i++)
		{
			char p = n[i];

			if ((p == '(') || (p == '[')) arr.push(p);

			else if (p == ')')
			{
				if (!arr.empty() && arr.top() == '(') arr.pop();
				else
				{
					check = 1;
					break;
				}
			}
			else if (p == ']')
			{
				if (!arr.empty() && arr.top() == '[') arr.pop();
				else
				{
					check = 1;
					break;
				}
			}
		}

		if (check == 0 && arr.empty()) cout << "yes" << endl;

		else cout << "no" << endl;
	}
}

/*https://www.acmicpc.net/problem/4949*/
