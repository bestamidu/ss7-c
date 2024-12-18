#include <stdio.h>

int main() {
    int n[5] = {4, 8, 3, 25, 5}; 
    int max = n[0]; 
    int min = n[0];
    for (int i = 1; i < 5; i++) {
        if (n[i] > max) {
            max = n[i];
        }
        if (n[i] < min) {
            min = n[i];
        }
    }
    printf("Ph?n t? l?n nh?t: %d\n", max);
    printf("Ph?n t? nh? nh?t: %d\n", min);

    return 0;
}