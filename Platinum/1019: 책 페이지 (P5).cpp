#include <iostream>
#include <vector>

using namespace std;

void calc(int a,vector<int>&arr,int b)
{
    while(a>0)
    {
        arr[a%10]+=b;
        a/=10;
    }
}

int main()
{
    long long end;
    cin>>end;
    
    vector<int> arr(10, 0);
    
    long long start=1;
    long long di=1;//자릿수
    
    while(true)
    {
        while(end%10!=9&&start<=end)
        {
            calc(end,arr,di);
            end--;
        }
        
        if(end<start)
            break;
        
        while(start%10!=0&&start<=end)
        {
            calc(start,arr,di);
            start++;
        }
        
        start/=10;//자릿수 낮추기
        end/=10;//자릿수 낮추기
        
        for(int i=0;i<10;i++)
            arr[i]+=end*di;
        
        di*=10;//나누는 수 증가
    }
    
    for(int i=0;i<10;i++)
        cout<<arr[i]<<' ';
    
    return 0;
}

/*https://www.acmicpc.net/problem/1019*/
//첫 플레티넘(2024-11-15)
