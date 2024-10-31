#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    
    string arr;
    cin>>arr;
    
    int cnt=0;
    for(int i=0;i<m;i++)
    {
        int a=0;//=IOI 길이
        if(arr[i]=='O')
            continue;
        
        else
        {
            while(arr[i+1]=='O'&&arr[i+2]=='I')
            {
                a++;
                if(a==n)
                {
                    cnt++;
                    a--;
                }
                i+=2;
            }
            a=0;
        }
    }
    cout<<cnt;

    return 0;
}

/*https://www.acmicpc.net/problem/5525*/
