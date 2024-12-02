#include <stdio.h>

long long fac(int n, int m);
int main()
{
    long long n, m;
    scanf("%lld%lld",&n,&m);
    
    if (n >= m)
        printf("0");
    else
        printf("%lld",fac(n, m));
}

long long fac(int n, int m){
    long long result=1;
    for(int i=2;i<=n;i++){
        result = (result*i) % m;
    }
    return result;
}
