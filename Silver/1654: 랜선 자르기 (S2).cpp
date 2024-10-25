#include <iostream>
#include <vector>

using namespace std;

long long k, n;

bool check(vector<long long>bector, long long ar)
{
    long long cnt=0;
    for (long long i:bector)
    {
        cnt+=i/ar;
    }
    return cnt >= n;
}

int main()
{
    cin >> k >> n;
    vector<long long> arr(k);
    
    for (int i=0;i<k;i++)//나는 멍청이입니다. ++를 --로 썼어요 깔깔
        cin >> arr[i];

    long long left=1;
    long long right=arr[0];

    for (long long i:arr)
    {
        if (i>right)
            right=i;
    }

    long long solution=0;

    while (left<=right)
    {
        long long mid=(left+right)/2;

        if (check(arr, mid))
        {
            solution=mid;
            left=mid+1;
        }
        else  
            right=mid-1;
    }

    cout<<solution;
    
    return 0;
}

/*https://www.acmicpc.net/problem/1654*/
