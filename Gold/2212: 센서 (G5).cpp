#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    
    int k,n;
    cin>>n>>k;

    if(k>=n)
    {
        cout<<0;
        return 0;
    }
        

    vector<int> sensor(n);
    for (int i=0;i<n;i++)
        cin >> sensor[i];

    sort(sensor.begin(),sensor.end());

    vector<int> distance;
    for(int i=1;i<n;i++)
    {
        distance.push_back(sensor[i]-sensor[i-1]);
    }
    sort(distance.begin(), distance.end(),greater<int>());
    
    int cnt=sensor[n-1]-sensor[0];
    for(int i=0;i<k-1;i++)
    {
        cnt-=distance[i];
    }

    cout<<cnt;

    return 0;
}

/*https://www.acmicpc.net/problem/2212*/
