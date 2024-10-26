#include <iostream>
#include <queue>

using namespace std;

priority_queue<int,vector<int>,greater<int>> pq ;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int n;
    
    cin>>n;
    
    if (n == 1)
    {
        cout << 0 << endl;
		return 0;
    }
		
    
    int tmp;
    for(int i=0;i<n;i++)
    {
        cin>>tmp;
        
        pq.push(tmp);
    }
    
    int result=0;
	while (!pq.empty())
	{   //10 20 40 ///30 40
		int sum = 0;
		sum += pq.top(); //sum=10 //sum=30
		
		pq.pop(); //20 40 // 40
		
		if (!pq.empty())
		{
			sum += pq.top();//sum=30 //sum=70
			pq.pop();//40 // 0
			if (!pq.empty())
				pq.push(sum); //30 40
		}
		
		result += sum;//30+70=100
	}
	
	cout<<result<<'\n';
	
    return 0;
}

/*https://www.acmicpc.net/problem/1715*/
