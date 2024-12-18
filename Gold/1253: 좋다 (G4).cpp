#include <iostream>
#include <algorithm>

using namespace std;

long long arr[2001];

int main()
{
    int n;
    
    cin>>n;//10
    
    if(n<3)
    {
        cout<<0;
        return 0;
    }
    
    for(int i=0;i<n;i++)
        cin>>arr[i]; // 1 2 3 4 5 6 7 8 9 10

    sort(arr,arr+n);

    int cnt=0;
    for(int i=0;i<n;i++)
    {
        int start=0;
        int end=n-1;
        while(start<end)
        {
            if(arr[start]+arr[end]<arr[i]) start++;
            else if(arr[start]+arr[end]>arr[i]) end--;
            else
            {
                if(start==i)
                    start++;
                else if(end==i)
                    end--;
                else
                {
                    cnt++;
                    break;
                }
            }
        }
    }
    
    cout<<cnt;
    
    return 0;
}

/*https://www.acmicpc.net/problem/1253*/
