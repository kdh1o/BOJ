#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
string str;
int main()
{    
    cin>>str;
    
    sort(str.begin(),str.end(),greater<char>());
    
    cout<<str;
}

/*https://www.acmicpc.net/problem/1427*/
