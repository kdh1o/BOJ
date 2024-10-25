#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    vector<pair<long long, long long>> arr;
    
    for(int i=0;i<n;i++)
    {
        long long a,b;
        cin>>a>>b;
        
        arr.push_back(make_pair(a,b));
    }
    
    sort(arr.begin(),arr.end());
    
    long long sum=0;
    for(auto i:arr)
        sum+=i.second;
        
    long long half=(sum+1) / 2;;
    long long susecond=0;
    long long result=0;
    
    for(auto i:arr)
    {
        susecond+=i.second;
        if(susecond>=half)
        {
            result=i.first;
            break;
        }
    }
    
    cout<<result;
    
    return 0;
}

/*https://www.acmicpc.net/problem/2141*/
