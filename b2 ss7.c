#include <stdio.h>

int main() {
    int arr[5];

    printf("Nhap v�o 5 so nguy�n:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("C�c phan tu trong mang l�:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

