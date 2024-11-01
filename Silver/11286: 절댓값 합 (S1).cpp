#include <iostream>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;

struct cmp
{
    bool operator()(int a,int b)
    {
        if(abs(a)==abs(b))
            return a>b;
        return abs(a)>abs(b);
    }
};

priority_queue<int, vector<int>, cmp> arr;

int main()
{
    int n;
    cin>>n;
    
    vector<int> v;
    int x;
    while(n--)
    {
        cin>>x;
        
        if(x==0)
        {
            if(arr.empty())
                v.push_back(0);
            else
            {
                v.push_back(arr.top());
                arr.pop();
            }
        }
        else
            arr.push(x);
    }
    
    int len=v.size();
    for(int i=0;i<len;i++)
        cout<<v[i]<<'\n';

    return 0;
}

/*https://www.acmicpc.net/problem/11286*/
