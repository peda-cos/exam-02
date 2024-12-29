#include <stdio.h>
#include <stdlib.h>

int is_prime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return n > 1;
}

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("0\n");
        return 0;
    }
    int n = atoi(argv[1]), sum = 0;
    for (int i = 2; i <= n; i++) {
        if (is_prime(i)) sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
