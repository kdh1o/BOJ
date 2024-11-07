#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    vector<int> crane(n);
    for(int i=0;i<n;i++)
        cin>>crane[i];
    
    int m;
    cin>>m;
    
    vector<int> box(m);
    for(int i=0;i<m;i++)
        cin>>box[i];
    
    sort(crane.begin(),crane.end());
    sort(box.begin(),box.end());
    
    if (crane.back()<box.back())
    {
        cout << -1;
        return 0;
    }
    
    int cnt=0;
    while(!box.empty())
    {
        cnt++;
        for(int i=crane.size()-1;i>=0;i--)
        {
            for(int j=box.size()-1;j>=0;j--)
            {
                if(crane[i]>=box[j])
                {
                    box.erase(box.begin()+j);
                    break;
                }
            }
        }
    }
    
    cout<<cnt;
    
    return 0;
}

/*https://www.acmicpc.net/problem/1092*/
