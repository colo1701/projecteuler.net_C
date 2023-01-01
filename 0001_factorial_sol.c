#include <stdio.h>

int input = 5;

int main() {
    int fact = 1;
    
    int a;
    for (a = 1; a <= input; a++) {
        fact = fact * a;
    }
    
    printf("The factorial of %d is %d.\n", input, fact);
    return 0;
}
