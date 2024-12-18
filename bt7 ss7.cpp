#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        do {
            printf("Nhap phan tu thu %d (phai la so le): ", i);
            scanf("%d", &arr[i]);
        } while (arr[i] % 2 == 0);
    }

    printf("Mang vua nhap la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}