#include <stdio.h>


void reduce_fraction(int* a, int* b) {
    int div = gcd(*a, *b); 
    *a /= div;
    *b /= div;
}

// НОД
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    reduce_fraction(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}
