#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define GOAL 600851475143

bool is_prime(int n) {
    int i;
    if(n == 1 || n == 2) {
        return false;
    }
    for(i = 3; i < sqrt(n); i++) {
        if(n%i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int stop = sqrt(GOAL);
    int res = 0;
    int iter = 0;
    while(iter < stop) {
        iter ++;
        if(is_prime(iter) && GOAL%iter == 0) {
            res = iter;
        }
    }
    printf("The result is %d.\n", res);
    return 0;
}
