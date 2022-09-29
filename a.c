#include <stdio.h>



int main() {
    int x = 1;
    int y = 0;
    // y = x++;
    y = ++x;


    printf("x=%d, y=%d\n", x, y);
    return 0;
}
