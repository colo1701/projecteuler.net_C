#include <stdio.h>

int main()
{
    int res = 2;                // The Sum
    int low = 1;                // The Lower Value
    int high = 2;               // The Higher Value
    int next = 0;               // The Next Fibonacci Number
    while(high < 4000000) {
        next = low + high;      // Build Next Number
        if(next%2 == 0) {       // Check If It Is Even
            res = res + next;   // If Yes Add To Sum
        }
        low = high;
        high = next;
    }
    printf("The result is %d.\n", res);
    return 0;
}
