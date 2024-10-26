#include <iostream>

using namespace std;

int main()
{
    int n;
    
    cin>>n;
    
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        for(int j=0;j<a;j++)
        {
            cout<<'=';
        }
        cout<<'\n';
    }

    return 0;
}

/*https://www.acmicpc.net/problem/13752*/
