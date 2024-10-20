#include <iostream>

using namespace std;

int arr[100001]={0,};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);//이거 안해서 시간초과남
    
    int n,m;
    
    cin>>n>>m;
    
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    for(int i=1;i<=n;i++)
        arr[i]+=arr[i-1];
    
    int a,b;
    for(int i=0;i<m;i++)
    {
        cin>>a>>b;
        
        cout<<arr[b-1]-arr[a-2]<<'\n';
    }

    return 0;
}

/*https://www.acmicpc.net/problem/11659*/
