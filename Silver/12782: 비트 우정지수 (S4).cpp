#include <iostream>
#include <string>
#include <algorithm>
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
    fastio;
    
	int n;
	cin>>n;

	string a,b;
	while(n--)
	{
	    int cnt=0,cnt2=0;
		cin>>a>>b;
		int len=a.size();
		for(int i=0; i<len; i++)
		{
			if(a[i]!=b[i])
			{
				if(a[i]=='1')
					cnt++;
				else
					cnt2++;
			}
		}

        cout<<max(cnt,cnt2)<<'\n';
	}

	return 0;
}

