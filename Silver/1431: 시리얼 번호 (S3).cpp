#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool GOoglefuxx(string a, string b)
{
	if (a.size() != b.size())
    	return a.size() < b.size();

	else
	{
		int sum1=0;
		for (int i=0;i<a.size();i++)
		{
		    int mi=a[i]-'0';
		    if (mi<=9&&mi>=0)
				sum1+=mi;
		}
			
		int sum2=0;

		for (int i=0;i<b.size();i++)
	    {
	        int im=b[i]-'0';
	        if (im<=9&&im>=0)
                sum2+=im;
	    }
		if (sum1 != sum2)
			return sum1 < sum2;
		else
			return a < b;
	}
}

int main()
{
    int n;
    
    cin>>n;
    
    string inpt;
    
    vector<string> arr;
    for(int i=0;i<n;i++)
    {
        cin>>inpt;
        
        arr.push_back(inpt);
    }
    
    sort(arr.begin(),arr.end(),GOoglefuxx);
    
    int len=arr.size();
    
    for(int i=0;i<len;i++)
        cout<<arr[i]<<'\n';

    return 0;
}

/*https://www.acmicpc.net/problem/1431*/
