#include <iostream>
#include <limits.h>
#include <cmath>

int key[10][2] = {
    {3, 1},
    {0, 0},
    {0, 1},
    {0, 2},
    {1, 0},
    {1, 1},
    {1, 2},
    {2, 0},
    {2, 1},
    {2, 2}
};

int hh, mm;

int effort(int a, int b){
    return abs(key[a][0] - key[b][0]) + abs(key[a][1] - key[b][1]);
}

int main(){
    scanf("%d:%d", &hh, &mm);
    
    int bh = 0;
    int bm = 0;
    
    int mineffort = 50;
    for(int i=hh; i<100; i+=24){
        for(int j=mm; j<100; j+=60){
            int cmp = effort(i/10, i%10) + effort(i%10, j/10) + effort(j/10, j%10);
            if(cmp<mineffort){
                mineffort = cmp;
                bh = i;
                bm = j;
            }
        }
    }
    
    printf("%02d:%02d", bh, bm);
    
    return 0;
}
