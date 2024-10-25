#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string, int>arr;
    
    int n;
    
    cin>>n;

    string tmp;
    while(n--)
    {
        cin>>tmp;
        arr[tmp]++;
    }
    
    string max;
    int cnt=0;
    
    for (auto i:arr)
    {
        if (i.second>cnt)
        {
            max=i.first;
            cnt=i.second;
        }
    }
    
    cout<<max;
    
    return 0;
}

/*https://www.acmicpc.net/problem/1302*/
