#include <iostream>

using namespace std;

int main()
{
    int n;
    
    cin >> n;
    
    long long arr[91];
    
    arr[1]=1;
    arr[2]=1;
    
    for (int i = 3; i <= n; i++)
    {
        arr[i] =arr[i - 2] + arr[i - 1] ;
    }
    
    cout << arr[n];

    return 0;
}

/*https://www.acmicpc.net/problem/2193*/
