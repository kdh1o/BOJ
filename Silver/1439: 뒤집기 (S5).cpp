#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    
    string s;
    
    cin>>s;
    
    int len = s.size();
    
    int zero=0;
    int one=0;
    
    for(int i=0;i<len;i++)
    {
        if(s[i]!=s[i+1])
        {
            if(s[i]=='0')
                zero++;
            else
                one++;
        }
    }
    
    int solution=min(one,zero);
    
    cout<<solution;
}

/*https://www.acmicpc.net/problem/1439*/
