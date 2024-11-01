#include <iostream>

using namespace std;

int main()
{
    int a,b;
    
    cin>>a>>b;
    
    int result=1;
    while(1)
    {
        if(a==b)
            break;
        else if(a>b)
        {
            result=-1;
            break;
        }
        
        if(b%2==0)//162 8
            b/=2;//81 4 
        else if(b%10==1)//81 
            b=(b-1)/10;//8
        else
        {
            result=-1;
            break;
        }
        result++;
    }
    
    cout<<result;
    
    return 0;
}

/*https://www.acmicpc.net/problem/16953*/
