#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    int n;
    
    cin>>n;
    
    stack<int> s;
    vector<char> arr;
    
    int cnt=1;
    int fuckmath=0;
    for(int i=0;i<n;i++)
    {
        cin>>fuckmath;
        
        while(cnt<=fuckmath)
        {
            s.push(cnt);
            cnt++;
            arr.push_back('+');
        }
        if(s.top()==fuckmath)
        {
            s.pop();
            arr.push_back('-');
        }
        else
        {
            cout<<"NO";
            return 0;
        }
    }
    
    int len=arr.size();
    
    for(int i=0;i<len;i++)
        cout<<arr[i]<<'\n';

    return 0;
}

/*https://www.acmicpc.net/problem/1874*/
