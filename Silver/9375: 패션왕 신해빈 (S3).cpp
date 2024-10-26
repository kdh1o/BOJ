#include <string>
#include <iostream>
#include <map>

using namespace std;

int main()
{
    int t;
    cin >> t;

    string mainn, trash;

    int n;
    while (t--)
    {
        map<string, int> arr;
        cin >> n;
        while (n--)
        {
            cin >>trash>>mainn;
            
            if(arr.find(mainn)==arr.end())
                arr.insert({mainn, 1});
            else
                arr[mainn]++;
        }

        int sum = 1;
        for (auto i : arr)
            sum *= (i.second + 1);
        
        cout<<sum-1<<'\n';
    }

    return 0;
}

/*https://www.acmicpc.net/problem/9375*/
