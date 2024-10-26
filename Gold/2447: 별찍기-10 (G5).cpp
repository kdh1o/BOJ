#include <iostream>

using namespace std;

void s(int i, int j, int a)
{
    if((i / a)%3==1 &&(j / a)%3==1)
	{
        printf(" ");
    }
    else
    {
        if(a / 3 == 0)
            printf("*");
        else
            s(i,j,a/3);
    }
}

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
        	s(i,j,n);
		}
        printf("\n");
    }
    
    return 0;
}

/*https://www.acmicpc.net/problem/2447*/
