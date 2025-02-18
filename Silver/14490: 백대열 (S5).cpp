#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (b != 0)
        return gcd(b, a % b);
    else
        return a;
}

int main()
{
  int n, m;
  
  scanf("%d:%d", &n, &m);
  
  int a = gcd(n, m);
  
  printf("%d:%d", n/a, m/a);
  
  return 0;
}

/*https://www.acmicpc.net/problem/14490*/
