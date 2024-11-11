#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    vector<int> arr;
    
    int input;
    for(int i=0;i<n;i++)
    {
        cin>>input;
        arr.push_back(input);
    }
    
    sort(arr.begin(),arr.end(),greater<int>());
    
    int i=0;
    while(1)
    {
        if(arr[i]<arr[i+1]+arr[i+2])
        {
            cout<<arr[i]+arr[i+1]+arr[i+2];
            break;
        }
        i++;
        if(i>=n)
        {
            cout<<"-1";
            break;
        }
    }
    
    return 0;
}

/*https://www.acmicpc.net/problem/1448*/
