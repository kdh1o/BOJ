#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;

    vector<string> topp(n);
    
    for (int i = 0; i < n; ++i)
        cin >> topp[i];

    vector<string> chiz;

    for (int i = 0; i < n; ++i)
    {
        string pizza = topp[i];
        
        int len = pizza.size();
        
        if (len >= 6 && pizza[len-6] == 'C' && pizza[len-5] == 'h' && pizza[len-4] == 'e' && pizza[len-3] == 'e' && pizza[len-2] == 's' && pizza[len-1] == 'e')
        {
            bool check = false;
                
            int len2 = chiz.size();
                
            for (int j = 0; j < len2; j++)
            {
                if (chiz[j] == pizza)
                {
                    check = true;
                    break;
                }
            }
            if (!check)
                chiz.push_back(pizza);
        }
    }

    if (chiz.size() >= 4)
        cout << "yummy" << endl;
    else
        cout << "sad" << endl;

    return 0;
}

/*꽈뜨로찌쯔핐짜*/
/*https://www.acmicpc.net/problem/27964*/
