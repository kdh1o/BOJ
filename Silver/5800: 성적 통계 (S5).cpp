#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int k;
    cin>>k;
    
    int arr[51];
    int num=1;
    while(k--){
        int a;
        cin>>a;
        
        for(int i=0; i<a; i++){
            cin>>arr[i];
        }
        sort(arr,arr+a,greater<int>());

        int result=0;
        for(int i=1; i<a; i++){
            int gap=arr[i-1]-arr[i];
            result=max(result,gap);
        }
        
        cout<<"Class "<<num<<'\n';
        cout<<"Max " <<arr[0]<<", ";
        cout<<"Min " <<arr[a-1]<<", ";
        cout<<"Largest gap "<<result<<'\n';
        
        num++;
    }

    return 0;
}
