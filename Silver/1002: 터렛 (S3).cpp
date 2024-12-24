#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int x1, y1, r1, x2, y2, r2;
    while(n--){
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        
        double d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
        
        if(d==0 and r1==r2)//교점 무한
            cout<< "-1" <<endl;
        
        else if(d==r1+r2 or d==abs(r1 - r2))//교점 한개
            cout<< "1" <<endl;
        
        else if(d>r1+r2 or abs(r1 - r2)>d)//교점 없음
            cout<< "0" <<endl;
            
        else
            cout<< "2" <<endl ;
    }

    return 0;
}
