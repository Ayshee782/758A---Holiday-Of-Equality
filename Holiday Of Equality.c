#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    int max_val = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] > max_val) {
            max_val = a[i]; // find richest citizen
        }
    }

    long long total = 0; // use long long for large sums
    for (int i = 0; i < n; i++) {
        total += max_val - a[i];
    }

    printf("%lld\n", total);
    return 0;
}

