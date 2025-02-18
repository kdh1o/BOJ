#include <iostream>
#include <queue>

using namespace std;

priority_queue<int,vector<int>>arr;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    
    int n;

    cin>>n;
    
    int tmp;
    
    for(int i=0;i<n;i++)
    {
        cin>>tmp;
        if(tmp==0)
        {
            if(arr.empty())
                cout<<0<<'\n';
            else
            {
                cout<<arr.top()<<'\n';
                arr.pop();
            }
        }
        else
            arr.push(tmp);
    }
    
    return 0;
}
