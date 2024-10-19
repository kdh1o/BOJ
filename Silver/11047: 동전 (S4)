#include<iostream>

using namespace std;

int main()
{
    int n,k;
    
    cin>>n>>k;
    
    int arr[12];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int result=0;
    
    for(int i=n-1;k>0;i--)
    {
        result+=k/arr[i];
        k=k%arr[i];
    }
    
    cout<<result;
    
}
