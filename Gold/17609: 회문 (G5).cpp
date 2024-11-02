#include <iostream>
#include <vector>
#include <string>

using namespace std;

int check(const string s)
{
    int left=0;
    int right=s.length()-1;
    
    while (left < right)
    {
        if (s[left] != s[right])
        {
            bool sl=true; // skipLeft
            bool sr=true; // skipRight
            
            for (int i=left+1,j=right;i<j;i++,j--)
            {
                if (s[i]!=s[j])
                {
                    sl=false;
                    break;
                }
            }

            for (int i=left,j=right-1;i<j;i++,j--)
            {
                if (s[i]!=s[j])
                {
                    sr=false;
                    break;
                }
            }

            if (sl||sr)
                return 1;
            else 
                return 2;
        }
        left++;
        right--;
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    vector<int> result;

    for (int i=0;i<n; ++i)
    {
        string s;
        cin>>s;
        result.push_back(check(s));
    }

    for(int i=0;i<n;i++)
        cout<<result[i]<<'\n';
        

    return 0;
}
