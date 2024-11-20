#include <iostream>
#include <string>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    
    int t;
    cin>>t;
    
    string af,as;
    int n;
    while(t--)
    {
        bool re=true;
        bool error=true;
        
        cin>>as;
        cin>>n;
        cin>>af;
        
        deque<int> dq;
        
        string instant="";
        for(int i=1;i<af.size();i++)
        {
            if(af[i]==']'||af[i]==',')
            {
                if(!instant.empty())
                {
                    dq.push_back(stoi(instant));
                    instant="";
                }
            }
            else
                instant+=af[i];
        }
        
        for(int i=0;i<as.size();i++)
        {
            if(as[i]=='R')
                re=!re;//뒤집기 호출
            else if(as[i]=='D')
            {
                if(dq.empty())
                {
                    error=false;
                    break;
                }
                else
                {
                    if(re)
                        dq.pop_front();
                    else
                        dq.pop_back();
                }
            }
        }
        if(!error)
            cout<<"error"<<'\n';
        
        else
        {
            if(!re)
                reverse(dq.begin(),dq.end());
                
            cout<<"[";
            
            for(int i=0;i<dq.size();i++)
            {
                if(dq.size()-1==i) cout<<dq[i];
                else cout<<dq[i]<<',';
            }
            cout<<"]"<<'\n';
        }
    }

    return 0;
}
