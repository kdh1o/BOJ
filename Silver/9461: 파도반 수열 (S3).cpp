#include <iostream>

using namespace std;

int main()
{
    long long p[101]={0,};
    
    for(int i=1;i<=3;i++)
        p[i]=1;
    
    for(int i=4;i<101;i++)
        p[i]=p[i-2]+p[i-3];//점화식

    int n;
    
    cin>>n;
    
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        cout<<p[a]<<'\n';
    }
    
    return 0;
}

/*https://www.acmicpc.net/problem/9461*/
