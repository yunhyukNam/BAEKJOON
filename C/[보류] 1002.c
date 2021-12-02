#include <stdio.h>
#include <math.h>
void main(){
    int T, x1, x2, y1, y2, r1, r2;
    double dis, subt;

    scanf("%d", T);

    while(T--) {
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

        dis = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    }
}