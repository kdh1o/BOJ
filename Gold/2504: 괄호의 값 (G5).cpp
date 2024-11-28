#include <iostream>
#include <stack>
#include <string>
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)

using namespace std;

string arr;
stack<char> s;

int main()
{
    fastio;
    
    cin>>arr;
    
    int len=arr.length();
    
    int cnt=1;
    int result=0;
    for(int i=0;i<len;i++)
    {
        if(arr[i]=='(')
        {
            cnt*=2;
            s.push('(');
        }
        else if(arr[i]=='[')
        {
            cnt*=3;
            s.push('[');
        }
        else if(arr[i]==')')
        {
            if(s.empty() || s.top()!='(')
            {
                cout<< 0;
                return 0;
            }
            if(arr[i-1]=='(')
            {
                s.pop();
                result+=cnt;
                cnt/=2;
            }
            else
            {
                cnt/=2;
                s.pop();
            }
        }
        else if(arr[i]==']')
        {
            if(s.empty() || s.top()!='[')
            {
                cout<< 0;
                return 0;
            }
            if(arr[i-1]=='[')
            {
                s.pop();
                result+=cnt;
                cnt/=3;
            }
            else
            {
                cnt/=3;
                s.pop();
            }
        }
    }
    
    if(!s.empty())
    {
        cout<<0;
        return 0;
    }
    
    cout<<result;
    
    return 0;
}
