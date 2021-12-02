#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main() {
    srand(time(NULL));    
    int T, n;

    scanf("%d", &T);

    n = rand()%9;
}

int fibonacci(int n) {
    if (n == 0) {
        printf("0");
        return 0;
    }
    else if (n == 1) {
        printf("1");
        return 1;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}