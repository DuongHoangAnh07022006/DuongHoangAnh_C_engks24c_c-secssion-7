#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int length = sizeof(arr) / sizeof(arr[0]);

    printf("C�c phan tu trong mang l�:\n");
    for (int i = 0; i < length; i++) {
        printf("Phan tu %d: %d\n", i, arr[i]);
    }

    printf("�o d�i cua mang l�: %d\n", length);

    return 0;
}

