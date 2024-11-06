#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main()
{
    string a,b;
    
    cin>>a>>b;
    
    int lena=a.size();
    int lenb=b.size();
    
    int minus=lenb-lena;
    
    int result=INT_MAX;
    for(int i=0;i<minus+1;i++)
    {
        int cnt=0;
        for(int j=0;j<lena;j++)
        {
            if(a[j]!=b[i+j])
                cnt++;
        }
        result=min(cnt,result);
    }
    
    cout<<result;
    
    return 0;
}
