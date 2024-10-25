#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int n;
    
    cin>>n;
    
    int coding =0;
    
    if(n==0)
    {
        cout<<coding;
        return 0;
    }
    
    vector<int>arr(n);
    
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    sort(arr.begin(), arr.end());
    
    int shit = round(n * 0.15);
	double sum = 0;

	for (int i = shit; i < n - shit; i++)
		sum += arr[i];

	coding = round(sum / (n - shit * 2));
	
	cout << coding;
    return 0;
}

/*https://www.acmicpc.net/problem/18110*/
