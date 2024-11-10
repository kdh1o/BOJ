#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int a=n/5;
    int b=(n-a*5)%2;
    while (b != 0)
    {
        if(a==0)
        {
            cout<<-1;
            return 0;
        } 
        a-=1;
        b=(n-a*5)%2;
    }
    
    cout <<a+(n-a*5)/2;
    
    return 0;
}
