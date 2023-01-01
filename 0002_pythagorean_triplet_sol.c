#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    
    for(c = 3; c <= 1000; c++) {
        for(b = 2; b < c; b++) {
            for(a = 1; a <= b; a++) {
                if(a + b + c == 1000) {
                    if(pow(a, 2) + pow(b, 2) == pow(c, 2)) {
                        printf("a is %d.\n", a);
                        printf("b is %d.\n", b);
                        printf("c is %d.\n", c);
                        printf("a*a is %d.\n", a*a);
                        printf("b*b is %d.\n", b*b);
                        printf("c*c is %d.\n", c*c);
                        printf("The sum is %d.\n", a + b + c);
                        printf("The product is %d.\n", a*b*c);
                    }
                }
            }
        }
    }
}
