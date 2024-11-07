#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    
    int n;
    cin>>n;
    vector<double> arr(n);
    
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    sort(arr.begin(),arr.end());
    
    for(int i=0;i<7;i++)
        printf("%.3f\n",arr[i]);
    
    return 0;
}
