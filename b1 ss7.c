#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int length = sizeof(arr) / sizeof(arr[0]);

    printf("Các phan tu trong mang là:\n");
    for (int i = 0; i < length; i++) {
        printf("Phan tu %d: %d\n", i, arr[i]);
    }

    printf("Ðo dài cua mang là: %d\n", length);

    return 0;
}

