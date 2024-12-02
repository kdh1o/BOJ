#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int a,b,n;
    cin>>a>>b>>n;//164 120 1
    
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    int bun = abs(b-a);
    
    for(int i=0;i<n;i++)
    {
        int x = 1 + abs(b-arr[i]);
        bun= min(bun, x);    
    }
    
    cout<<bun;
    
    return 0;
}
