#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    
    int testcase;
    cin>>testcase;

    for (int i=0;i<testcase;i++)
    {
        int n, m;
        cin>>n>>m;

        queue<pair<int, int>> q;
        priority_queue<int> arr;

        for (int j=0; j<n;j++)
        {
            int input;
            cin>>input;
            q.push({j,input});
            arr.push(input);
        }

        int cnt=0;
        while (!q.empty())
        {
            int first=q.front().first;
            int second=q.front().second;
            q.pop();

            if (second==arr.top())
            {
                arr.pop();
                cnt++;

                if (first==m)
                {
                    cout<<cnt<< '\n';
                    break;
                }
            }
            else
                q.push({first, second});
        }
    }

    return 0;
}

/*https://www.acmicpc.net/problem/1966*/
//간단한 노가다 문제
