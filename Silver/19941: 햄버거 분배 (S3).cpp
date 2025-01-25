#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    
    string arr;
    cin>>arr;
    
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(arr[i]!='P')
            continue;
        
        int left = max(0, i-k);
        int right = min(n-1, i+k);
        
        while(right>=left){
            if(arr[left]=='H'){
                arr[left] = 'x';
                cnt++;
                break;
            }
            left++;
        }
    }
    
    cout<<cnt;
    
    return 0;
}
