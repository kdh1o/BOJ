#include <iostream>

using namespace std;

int main()
{
    int mod = 10007;
    int n;
    
    cin>>n;
    
    int arr[100001];
    
    arr[1]=1;
    arr[2]=2;
    
    for(int i=3; i<=n; i++)
    {
        arr[i] = (arr[i-1] + arr[i-2])%mod;
    }
    
    cout<<arr[n]<<'\n';

    return 0;
}

/*https://www.acmicpc.net/problem/11726*/
