#include <iostream>

using namespace std;

int main()
{
    int n;
    
    cin>>n;

    int b=5;
    
    int sum=0;
    
    while (n>=0)
    {
		if (n % b == 0)
		{
		    sum += (n / b);
			cout << sum << '\n';
			return 0;
		}
		
		n -= 3;
		sum++;
	}
	
	cout << -1 << '\n';

    return 0;
}

/*https://www.acmicpc.net/problem/2839*/
